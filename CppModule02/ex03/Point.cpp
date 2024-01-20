#include "Point.hpp"

Point::Point() : X(0), Y(0)
{
}

Point::Point(const float x, const float y) : X(x), Y(y)
{
}

Point::Point(Point const &p): X(p.X), Y(p.Y)
{
}

const Point &Point::operator=(Point const &p)
{

    return(p);
}

Point::~Point()
{
}

Fixed Point::getX() const
{
    return (X.toFloat());
}

Fixed Point::getY() const
{
    return (Y.toFloat());
}