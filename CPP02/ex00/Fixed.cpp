#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed() : _rawBits(0) {}

Fixed::~Fixed() {}

void Fixed::setRawBits( int const raw ) {
    _rawBits = raw;
}

int Fixed::getRawBits( void ) const {
    return _rawBits;
}
