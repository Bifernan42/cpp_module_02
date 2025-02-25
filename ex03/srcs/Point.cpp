#include "../includes/Point.hpp"

Point::Point () : x(0), y(0) {}

Point::Point(const float x_val, const float y_val) : x(x_val), y(y_val) {}

Point & Point::operator=(const Point & v)
{
	if (this == &v)
		return *this;
	return *this;
}

Point::Point(const Point & other) : x(other.x), y(other.y) {}

Point::~Point() {}

bool Point::operator==(const Point & v) const
{
	return (this->x == v.x && this->y == v.y);
}

//Point::Point(const Point & v) : x(v.getX()), y(v.getY()) {}

Fixed Point::getX() const
{
	return (this->x);
}

Fixed Point::getY() const
{
	return (this->y);
}
