#include <iostream>
#include <stdio.h>
#include "Fixed.hpp"
#include "Point.hpp"
#include "Triangle.hpp"

static void	check_triangle(const Triangle& tri, const Point& point)
{
	if (inside_triangle(tri, point) == true)
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
}

int	main(void)
{
	Triangle one(Point(2.0f, 3.0f), Point(3, 4), Point(5, 6));
	Triangle two(Point(-1.0f, 0.0f), Point(1, 0.0f), Point(0, 5));
	Point	p1(3.0f, 8.6f);
	Point	p2(3.0f, 3.1f);
	Point	p3(0.1f, 1.0f);
	Point	p4(0.1f, 4.0f);

	// check_triangle(one, p1);
	// check_triangle(one, p2);
	// check_triangle(one, p3);
	// check_triangle(one, p4);
	check_triangle(two, p3);
	// check_triangle(two, p4);
	return (0);
}
