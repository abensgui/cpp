#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0)
{
	// std::cout << "Default constructor called\n";
}
Fixed::Fixed(const int f)
{
	// std::cout << "int constructor called\n";
	fixedPoint = f * (1 << fractional);
}

Fixed::Fixed(const float f)
{
	// std::cout << "float constructor called\n";
	fixedPoint = roundf(f * (1 << fractional));
}

Fixed::Fixed(Fixed const &f1)
{
	// std::cout << "Copy constructor called\n";
	fixedPoint = f1.getRawBits();
}

Fixed &Fixed::operator=(Fixed const &f)
{
	// std::cout << "Copy assignment operator called\n";
	this->fixedPoint = f.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
	return (fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
	// std::cout << "setRawBits member function called\n";
}
int Fixed::toInt(void) const
{
	return (fixedPoint / (1 << fractional));
}

float Fixed::toFloat(void) const
{
	return ((float)fixedPoint / (1 << fractional));
}

std::ostream &operator<<(std::ostream &out, const Fixed &c)
{
	out << c.toFloat();
	return out;
}
// comparison operators
bool Fixed::operator<(const Fixed &f) const
{
	return (fixedPoint < f.fixedPoint);
}

bool Fixed::operator>(const Fixed &f) const
{
	return (fixedPoint > f.fixedPoint);
}

bool Fixed::operator>=(const Fixed &f) const
{
	return (fixedPoint >= f.fixedPoint);
}

bool Fixed::operator<=(const Fixed &f) const
{
	return (fixedPoint <= f.fixedPoint);
}

Fixed Fixed::operator+(const Fixed &f) const
{
	Fixed a;
	a.fixedPoint = this->fixedPoint + f.fixedPoint;
	return (a);
}

Fixed Fixed::operator-(const Fixed &f) const
{
	Fixed a;
	a.fixedPoint = this->fixedPoint - f.fixedPoint;
	return (a);
}

Fixed Fixed::operator*(const Fixed &f) const
{
	Fixed a;
	a.fixedPoint = (this->fixedPoint * f.fixedPoint) / (1 << fractional);
	return (a);
}

Fixed Fixed::operator/(const Fixed &f) const
{
	Fixed a;
	a.fixedPoint = ((float)this->fixedPoint / (float)f.fixedPoint) * 256;
	// std::cout << "hjadjsfvs "<< a.fixedPoint << std::endl;
	return (a);
}

Fixed Fixed::operator++()
{
	this->fixedPoint++;
	return (*this);
}
Fixed Fixed::operator--()
{
	this->fixedPoint--;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed tmp;
	tmp.fixedPoint = this->fixedPoint;
	this->fixedPoint++;
	return (tmp);
}
Fixed Fixed::operator--(int)
{
	Fixed tmp;
	tmp.fixedPoint = this->fixedPoint;
	this->fixedPoint--;
	return (tmp);
}

const Fixed &Fixed::max(Fixed const &f1, const Fixed &f2)
{
	if (f1.fixedPoint < f2.fixedPoint)
		return f2;
	else
		return f1;
}

const Fixed &Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1.fixedPoint > f2.fixedPoint)
		return f2;
	else
		return f1;
}
Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.fixedPoint < f2.fixedPoint)
		return f2;
	else
		return f1;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.fixedPoint > f2.fixedPoint)
		return f2;
	else
		return f1;
}
