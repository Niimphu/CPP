#include "Animal.hpp"

Animal::Animal() : _type( "Animal" ) {
	std::cout << "Animal default constructor called: " << _type << std::endl;
}

Animal::Animal( const std::string& type ) : _type( type ) {
	std::cout << "Animal constructor called: " << type << std::endl;
}

Animal::Animal( const Animal& original ) {
	std::cout << "Animal copy constructor called: " << _type << std::endl;
	this->_type = original._type;
}

Animal::~Animal() {
	std::cout << "Animal default destructor called: " << _type << std::endl;
}

Animal&	Animal::operator=( const Animal& other ) {
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

void	Animal::makeSound( void ) const {
	std::cout << "*Generic animal noises*" << std::endl;
}

void	Animal::setType( const std::string& type ) {
	_type = type;
}

std::string	Animal::getType( void ) const {
	return _type;
}
