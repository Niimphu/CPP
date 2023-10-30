#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed() : _rawBits(0) {
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int intValue ) : _rawBits( intValue << _fractionalBits ) {
//	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float floatValue ) : _rawBits( static_cast<int>(floatValue * (1 << _fractionalBits)) ) {
//	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& original ) {
	this->_rawBits = original._rawBits;
//	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other ) {
	if (this != &other) {
		this->_rawBits = other._rawBits;
	}
//	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	float floatValue = fixed.toFloat();

	os << floatValue;

	return os;
}

bool	Fixed::operator>( const Fixed& other ) {
	return (_rawBits > other.getRawBits());
}
bool	Fixed::operator<( const Fixed& other ) {
	return (_rawBits < other.getRawBits());
}

bool	Fixed::operator>=( const Fixed& other ) {
	return (_rawBits >= other.getRawBits());
}

bool	Fixed::operator<=( const Fixed& other ) {
	return (_rawBits <= other.getRawBits());
}

bool	Fixed::operator==( const Fixed& other ) {
	return (_rawBits == other.getRawBits());
}

bool	Fixed::operator!=( const Fixed& other ) {
	return (_rawBits != other.getRawBits());
}

Fixed	Fixed::operator+( const Fixed& other ) {
	int	addedRawBits = this->_rawBits + other.getRawBits();
	Fixed	result;
	result.setRawBits(addedRawBits);
	return result;
}

Fixed	Fixed::operator-( const Fixed& other ) {
	int	subtractedRawBits = this->_rawBits - other.getRawBits();
	Fixed	result;
	result.setRawBits(subtractedRawBits);
	return result;
}

Fixed	Fixed::operator*( const Fixed& other ) {
	int	multipliedRawBits = this->_rawBits * other.getRawBits();
	Fixed	result;
	result.setRawBits(multipliedRawBits);
	return result;
}

Fixed	Fixed::operator/( const Fixed& other ) {
	int	dividedRawBits = this->_rawBits / other.getRawBits();
	Fixed	result;
	result.setRawBits(dividedRawBits);
	return result;
}

Fixed&	Fixed::operator++( void ) {
	++_rawBits;
	return *this;
}

Fixed	Fixed::operator++( int ) {
	Fixed	copy(*this);
	++_rawBits;
	return copy;
}

Fixed&	Fixed::operator--( void ) {
	--_rawBits;
	return *this;
}
Fixed	Fixed::operator--( int ) {
	Fixed	copy(*this);
	--_rawBits;
	return copy;
}

float	Fixed::toFloat( void ) const {
	return (static_cast<float>(_rawBits) / (1 << _fractionalBits));
}

int		Fixed::toInt( void ) const {
	return (_rawBits >> _fractionalBits);
}

Fixed::~Fixed() {
//	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits( int const raw ) {
	_rawBits = raw;
}

int Fixed::getRawBits( void ) const {
//	std::cout << "getRawBits member function called" << std::endl;
	return _rawBits;
}
