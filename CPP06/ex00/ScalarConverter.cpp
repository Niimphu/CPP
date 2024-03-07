#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) {}

ScalarConverter::ScalarConverter( const ScalarConverter original ) {
	(void)original;
}

ScalarConverter::~ScalarConverter( void ) {}

ScalarConverter&	ScalarConverter::operator=( const ScalarConverter other ) {
	if ( this != other ) {}
	return *this;
}
