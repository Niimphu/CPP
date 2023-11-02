#include "Point.hpp"

Point::Point() : _x( Fixed(0) ), _y( Fixed(0) ) {}

Point::Point( const float x, const float y ) : _x( Fixed(x) ), _y( Fixed(y) ) {}

Point::Point( const Point& original ) : _x(original._x), _y(original._y) {}

Point&	Point::operator=( const Point& other ) {
	if (this != &other) {}
	return *this;
}

Fixed	Point::getX() const {
	return _x;
}

Fixed	Point::getY() const {
	return _y;
}

Point::~Point() {}
