#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called\n";
}
Fixed::Fixed(const int f)
{
	std::cout << "int constructor called\n";
	fixedPoint = f * (1 << fractional);
}

Fixed::Fixed(const float f)
{
	std::cout << "float constructor called\n";
	fixedPoint = roundf(f * (1 << fractional));
}


Fixed::Fixed(Fixed const &f1)
{
	std::cout << "Copy constructor called\n";
	fixedPoint = f1.getRawBits();
}

Fixed& Fixed::operator=(Fixed const &f)
{
	std::cout << "Copy assignment operator called\n";
	this->fixedPoint = f.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
	std::cout << "setRawBits member function called\n";
}
int Fixed::toInt(void) const
{
    return (fixedPoint / (1 << fractional ));
}

float Fixed::toFloat(void) const
{
    return ((float)fixedPoint / (1 << fractional ));
}

std::ostream &operator<<(std::ostream &out, const Fixed &c)
{
	out << c.toFloat();
	return out;
}