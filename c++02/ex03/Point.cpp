#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float x1, const float y1) : x(x1), y(y1)
{
}

Point::Point(const Point& original) : x(original.x), y(original.y)
{
}

Point::~Point()
{
}

Fixed	Point::get_x() const
{
	Fixed	tmp = this->x;
	return (tmp);
}

Fixed	Point::get_y() const
{
	Fixed	tmp = this->y;
	return (tmp);
}
