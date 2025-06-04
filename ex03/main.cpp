#include "Point.hpp"

int main( void )
{
	// In a triangle
	std::cout << "~ A point that is inside a triangle ~" << std::endl << std::endl;
	const Point point1(1, 1);
	const Point a1(0, 0);
	const Point b1(10, 0);
	const Point c1(0, 10);

	std::cout << "point :\t( x = " << point1.getX() << " y = " << point1.getY() << ")" << std::endl;
	std::cout << "a :\t( x = " << a1.getX() << " y = " << a1.getY() << " )" << std::endl;
	std::cout << "b :\t( x = " << b1.getX() << " y = " << b1.getY() << " )" << std::endl;
	std::cout << "c :\t( x = " << c1.getX() << " y = " << c1.getY() << " )" << std::endl;

	if (bsp(a1, b1, c1, point1))
		std::cout << "Result: The point is inside the triangle" << std::endl;
	else
		std::cout << "Result: The point is NOT inside the triangle" << std::endl;
	std::cout << std::endl << std::endl;



	// NOT in a triangle
	std::cout << "~ A point that is NOT inside a triangle ~" << std::endl << std::endl;
	const Point point2(42, 42);
	const Point a2(0, 0);
	const Point b2(10, 0);
	const Point c2(0, 10);

	std::cout << "point :\t( x = " << point2.getX() << " y = " << point2.getY() << ")" << std::endl;
	std::cout << "a :\t( x = " << a2.getX() << " y = " << a2.getY() << " )" << std::endl;
	std::cout << "b :\t( x = " << b2.getX() << " y = " << b2.getY() << " )" << std::endl;
	std::cout << "c :\t( x = " << c2.getX() << " y = " << c2.getY() << " )" << std::endl;

	if (bsp(a2, b2, c2, point2))
		std::cout << "Result: The point is inside the triangle" << std::endl;
	else
		std::cout << "Result: The point is NOT inside the triangle" << std::endl;
	std::cout << std::endl << std::endl;



	// Is a vertex
	std::cout << "~ A point that IS a vertex of the triangle ~" << std::endl << std::endl;
	const Point point3(0, 0);
	const Point a3(0, 0);
	const Point b3(10, 0);
	const Point c3(0, 10);

	std::cout << "point :\t( x = " << point3.getX() << " y = " << point3.getY() << ")" << std::endl;
	std::cout << "a :\t( x = " << a3.getX() << " y = " << a3.getY() << " )" << std::endl;
	std::cout << "b :\t( x = " << b3.getX() << " y = " << b3.getY() << " )" << std::endl;
	std::cout << "c :\t( x = " << c3.getX() << " y = " << c3.getY() << " )" << std::endl;

	if (bsp(a3, b3, c3, point3))
		std::cout << "Result: The point is inside the triangle" << std::endl;
	else
		std::cout << "Result: The point is NOT inside the triangle" << std::endl;
	std::cout << std::endl << std::endl;

	// Is on the edge
	std::cout << "~ A point that is on the edge of the triangle ~" << std::endl << std::endl;
	const Point point4(5, 5);
	const Point a4(0, 0);
	const Point b4(10, 0);
	const Point c4(0, 10);

	std::cout << "point :\t( x = " << point4.getX() << " y = " << point4.getY() << ")" << std::endl;
	std::cout << "a :\t( x = " << a4.getX() << " y = " << a4.getY() << " )" << std::endl;
	std::cout << "b :\t( x = " << b4.getX() << " y = " << b4.getY() << " )" << std::endl;
	std::cout << "c :\t( x = " << c4.getX() << " y = " << c4.getY() << " )" << std::endl;

	if (bsp(a4, b4, c4, point4))
		std::cout << "Result: The point is inside the triangle" << std::endl;
	else
		std::cout << "Result: The point is NOT inside the triangle" << std::endl;
	std::cout << std::endl;

	return (0);
}
