#include "Fixed.hpp"
#include "Point.hpp"
#include "Triangle.hpp"

Fixed tri_area(const Point& x, const Point& y, const Point& z)
{
	Fixed	a(x.get_x() * (y.get_y() - z.get_y()));
	Fixed	b(y.get_x() * (x.get_y() - z.get_y()));
	Fixed	c(z.get_x() * (x.get_y() - y.get_y()));
	Fixed	area((a + b + c) / Fixed(2));

	area.abs();
	return (area);
}

bool	inside_triangle(const Triangle& triangle, const Point& point)
{
	Fixed	or_triangle;
	Fixed	pt_area[3];

	or_triangle = tri_area(triangle.get_pt(0), triangle.get_pt(1), triangle.get_pt(2));
	pt_area[0] = tri_area(triangle.get_pt(0), triangle.get_pt(1), point);
	pt_area[1] = tri_area(triangle.get_pt(0), triangle.get_pt(2), point);
	pt_area[2] = tri_area(triangle.get_pt(1), triangle.get_pt(2), point);

	if (pt_area[0] + pt_area[1] + pt_area[2] == or_triangle)
		return (true);
	return (false);
}