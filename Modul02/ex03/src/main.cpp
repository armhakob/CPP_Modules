#include "Point.hpp"

int main(void)
{
	Point a(0, 0);
    Point b(1, 0);
    Point c(0, 1);
    Point p(0.25, 0.25);

    if (bsp(a, b, c, p)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle or on the edge." << std::endl;
    }
	return (0);
}