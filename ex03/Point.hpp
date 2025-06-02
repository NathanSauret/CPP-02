#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;
	
	public:
		// constructors/destructors
		Point();
		Point( const float x, const float y );
		Point( const Point &toCopy );
		~Point();

		// class member functions
		const Fixed	&getX( void ) const;
		const Fixed	&getY( void ) const;
		Point &operator=( const Point &src );
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif