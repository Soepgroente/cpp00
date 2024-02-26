#include <iostream>
#include "Fixed.hpp"

#pragma once

class	Point
{
	private:
		Fixed const	x;
		Fixed const	y;

	public:
	
	void	operator=(const Point& original);
	bool	bsp(Point const a, Point const b, Point const c, Point const point);

	Point();
	Point(const float x, const float y);
	Point(const Point& original);
	~Point();
};