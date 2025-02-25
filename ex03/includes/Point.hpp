#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(const float, const float);
		Point(const Point &);
		Point& operator=(const Point &);
		~Point();
		bool operator==(const Point &) const;
		Fixed getX() const;
		Fixed getY() const;
		static Fixed det(const Point &, const Point &);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
