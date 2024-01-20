
#include "Point.hpp"
int main()
{
	Point a(0, 0);
	Point b(10, 30);
	Point c(20, 0);
	Point p(10, 15);
	std::cout << bsp(a, b, c, p)<< std::endl;
	Point a1(0, 0);
	Point b1(10, 30);
	Point c1(20, 0);
	Point p1(30, 15);
	std::cout << bsp(a1, b1, c1, p1)<< std::endl;
}
