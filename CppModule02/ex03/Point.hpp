#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed X;
	const Fixed Y;
public:
	Point();
	Point(const float x, const float y);
	Point(Point const &p);
	const Point &operator=(Point const &p);
	~Point();
	Fixed getX()const;
	Fixed getY()const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif