#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << Fixed( 5.05f ) << std::endl;
	std::cout << Fixed( 2 ) << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed c;
	Fixed const d( Fixed( 3.14f ) / Fixed( 2 ) );
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	c = Fixed( d ) - Fixed ( 0.1f );
	std::cout << c << std::endl;

	std::cout << Fixed::min( c++, d ) << std::endl;
	std::cout << Fixed::min( c, d) << std::endl;

	std::cout << c / 0 << std::endl;

	return 0;
}
