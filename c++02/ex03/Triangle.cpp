#include "Triangle.hpp"
#include "Point.hpp"

Triangle::Triangle()
{
}

Triangle::Triangle(const Point& a, const Point& b, const Point& c) : vertices{a, b, c}
{
}

// Triangle::Triangle(const Triangle& og) : vertices{og.vertices[0], og.vertices[1], og.vertices[2]}
// {
// }

Triangle::Triangle(const Triangle& og) : vertices{og.get_pt(0), og.get_pt(1), og.get_pt(2)}
{
}

Triangle::~Triangle()
{
}

const Point&	Triangle::get_pt(int point) const
{
	// Point	tmp(this->vertices[point]);
	// return (tmp);
	return (this->vertices[point]);
}
