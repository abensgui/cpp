#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	/* data */
	int fixedPoint;
	static const int fractional = 8;

public:
	Fixed();
	Fixed(const int f);
	Fixed(const float f);
	Fixed(Fixed const &f1);
	Fixed &operator=(Fixed const &f);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt(void) const;
	float toFloat(void) const;
};
std::ostream &operator<<(std::ostream &out, const Fixed &c);
#endif