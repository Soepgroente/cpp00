#include "Fixed.hpp"
#include "Point.hpp"
#include "Triangle.hpp"

static void	print_point(const Point& pt)
{
	std::cout << "x: " << pt.get_x().toFloat() << std::endl;
	std::cout << "y: " << pt.get_y().toFloat() << std::endl;
}

static Fixed	directionFraction(const Point& a, const Point& b)
{
	Fixed x(a.get_x() / b.get_x());
	Fixed y(a.get_y() / b.get_y());

	Fixed c(sqrt(Fixed(x * x + y * y).toFloat()));
	std::cout << "c: " << c.toFloat() << std::endl;
	return (c);
}

static Point Vector2D(const Point& from, const Point& to)
{
	Fixed x;
	Fixed y;

	x = to.get_x() - from.get_x();
	y = to.get_y() - from.get_y();

	return (Point(x, y));
}

bool	inside_triangle(const Triangle& triangle, const Point& point)
{
	Point	vectorAB(Vector2D(triangle.get_pt(0), triangle.get_pt(1)));
	Point	vectorAC(Vector2D(triangle.get_pt(0), triangle.get_pt(2)));
	Point	vectorAtoPoint(Vector2D(triangle.get_pt(0), point));



	Fixed	fractionToB();
	Fixed	fractionToC(directionFraction(vectorAtoPoint, vectorAC));

	if (fractionToB <= Fixed(0) || (fractionToC <= Fixed(0) || Fixed(fractionToB + fractionToC) >= Fixed(2)))
	{
		return (false);
	}
	return (true);
}