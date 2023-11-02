#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"
# include <iostream>
# include <string>
# include <cmath>

class Point {
public:
	Point();
	Point( const float, const float );
	Point( const Point& );
	~Point();

	Point	&operator=( const Point& );

	Fixed	getX() const;
	Fixed	getY() const;


private:
	const Fixed	_x;
	const Fixed	_y;

};

#endif
