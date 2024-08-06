#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	a;
		const Fixed	b;
	public:
		Point();
		Point(const float num1, const float num2);
		Point(const Point &other);
		Point& operator=(const Point &other);
		~Point();
		float getx() const;
		float gety() const;
};

Fixed abs(Fixed num);
Fixed area(Point const a, Point const b, Point const c);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif