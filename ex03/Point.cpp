#include "Point.hpp"

// Default constructor
Point::Point() : _x(0), _y(0)
{
	// std::cout << "Point constructor called" << std::endl;
}

// Constructor that take floats
Point::Point( const float x, const float y ) : _x(x), _y(y)
{
	// std::cout << "Point constructor called with x=" << _x << " and y=" << _y << std::endl;
}

// Constructor that copy
Point::Point(const Point &toCopy): _x(toCopy.getX()), _y(toCopy.getY())
{
	// std::cout << "Copy Point constructor called" << std::endl;
	*this = toCopy;
}

// Destructor
Point::~Point()
{
	// std::cout << "Point destructor called" << std::endl;
}

// return the _x point
const Fixed	&Point::getX( void ) const
{
	return ( _x );
}

//Rreturn the _y point
const Fixed	&Point::getY( void ) const
{
	return ( _y );
}

// Overloaded Operators
Point &Point::operator=(const Point &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}
