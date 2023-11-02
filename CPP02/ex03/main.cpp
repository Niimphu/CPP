#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point );

int main( void ) {
	//Triangle acd has vertices at (0.0, 0.0), (4.5, 0.0), and (2.0, 3.5)
	//Point e should be inside the triangle, h is on the border and f is outside of the triangle

	Point	a;
	Point	b( 4.5f, 0 );
	Point	c( b );
	Point	d( 2.0f, 3.5f );
	Point	e( 2.5f, 1.5f );

	if (bsp( a, c, d, e )) {
		std::cout << "Point e is inside triangle acd" << std::endl;
	}
	else {
		std::cout << "Point e is not inside triangle acd" << std::endl;
	}

	Point f( 4.0f, 1.0f );

	if (bsp( a, c, d, f )) {
		std::cout << "Point f is inside triangle acd" << std::endl;
	}
	else {
		std::cout << "Point f is not inside triangle acd" << std::endl;
	}

	Point	g( 2.0f, 0.0f );
	Point	h = g;

	if (bsp( a, c, d, h )) {
		std::cout << "Point h is inside triangle acd" << std::endl;
	}
	else {
		std::cout << "Point h is not inside triangle acd" << std::endl;
	}

	return 0;
}
