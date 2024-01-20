#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
	/* data */
	int fixedPoint;
	static const int  fractional = 8;


public:
	Fixed();
	Fixed(Fixed const &f1);
	Fixed& operator = (Fixed const &f);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};
#endif