#include "Point.hpp"
#include "Fixed.hpp"

float	getAreaOfTriangle( Point const, Point const, Point const );

bool	bsp( Point const a, Point const b, Point const c, Point const point ) {
	float	triangleArea = getAreaOfTriangle( a, b, c );

	if (triangleArea == 0.0) {
		return false;
	}

	float	areaPointAB = getAreaOfTriangle( a, b, point );
	float	areaPointBC = getAreaOfTriangle( b, c, point );
	float	areaPointAC = getAreaOfTriangle( a, c, point );

	if ( areaPointAB == 0.0 || areaPointBC == 0.0 || areaPointAC == 0.0 ) {
		return false;
	}

	return ( triangleArea == areaPointAB + areaPointBC + areaPointAC );
}

float	getAreaOfTriangle( Point const a, Point const b, Point const c ) {
	return (0.5 * abs( a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())
		+ b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())
		+ c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()) ));
}
