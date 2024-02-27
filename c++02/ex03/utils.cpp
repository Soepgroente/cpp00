#include "Fixed.hpp"
#include "Point.hpp"
#include "Triangle.hpp"

static Fixed	fixed_diff(Fixed& a, Fixed& b)
{
	Fixed c(a - b);

	if (c < Fixed(0))
		c = c * Fixed(-1);
	return (c);
}

bool	inside_triangle(const Triangle triangle, const Point point)
{
	
}