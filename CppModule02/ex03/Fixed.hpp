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
	// comparison operators
	bool operator< (const Fixed &f) const;
	bool operator> (const Fixed &f) const;
	bool operator>= (const Fixed &f) const;
	bool operator<= (const Fixed &f) const;
	//arithmetic operators
	Fixed operator+ (const Fixed &f) const;
	Fixed operator- (const Fixed &f) const;
	Fixed operator* (const Fixed &f) const;
	Fixed operator/ (const Fixed &f) const;
	//increment/decrement
	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	/////////////////////
	static const Fixed & max(Fixed const &f1, Fixed const &f2) ;
	static const Fixed & min(Fixed const &f1, Fixed const &f2) ;
	static  Fixed & max(Fixed &f1, Fixed &f2) ;
	static  Fixed & min(Fixed &f1, Fixed &f2) ;
};
std::ostream &operator<<(std::ostream &out, const Fixed &c);
#endif