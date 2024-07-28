#include "Point.hpp"

Point:: Point():a(0),b(0)
{

}

Point:: Point(const float num1, const float num2):a(num1),b(num2)
{
}

Point:: Point (const Point &other):a(other.a),b(other.b)
{
}

Point& Point:: operator=(const Point &other)
{
	(void)other;
	return (*this);
}

Point:: ~Point()
{

}

float Point:: getx() const
{
	return (a.toFloat());
}

float Point:: gety() const
{
	return (b.toFloat());
}