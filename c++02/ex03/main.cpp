#include <iostream>
#include <stdio.h>
#include "Fixed.hpp"
#include "Point.hpp"
#include "Triangle.hpp"

int	main(void)
{
	Triangle one(Point(2.0f, 3.0f), Point(3, 4), Point(5, 6));
	Point	something(3.0f, 8.6f);

	if (inside_triangle(one, something) == true)
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	return (0);
}
