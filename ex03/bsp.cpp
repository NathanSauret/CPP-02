#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	int		d1;
	int		d2;
	int		d3;

	// check if point on vertex
	if (point.getX() == a.getX() && point.getY() == a.getY())
		return (0);
	if (point.getX() == b.getX() && point.getY() == b.getY())
		return (0);
	if (point.getX() == c.getX() && point.getY() == c.getY())
		return (0);

	// compute cross products
	d1 = ( b.getX() - a.getX() ) * ( point.getY() - a.getY() ) - ( b.getY() - a.getY() ) * ( point.getX() - a.getX() );
	d2 = ( c.getX() - b.getX() ) * ( point.getY() - b.getY() ) - ( c.getY() - b.getY() ) * ( point.getX() - b.getX() );
	d3 = ( a.getX() - c.getX() ) * ( point.getY() - c.getY() ) - ( a.getY() - c.getY() ) * ( point.getX() - c.getX() );

	if ((d1 < 0 && d2 < 0 && d3 < 0) || (d1 > 0 && d2 > 0 && d3 > 0))
		return (1);
	return (0);
}
