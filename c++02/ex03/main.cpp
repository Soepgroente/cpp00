#include <iostream>
#include <stdio.h>
#include "Fixed.hpp"
#include "Point.hpp"
#include "Triangle.hpp"

int	main(void)
{
	Triangle one(Point(2.0f, 3.0f), Point(3, 4), Point(5, 6));
	Triangle two(one);

	return (0);
}
