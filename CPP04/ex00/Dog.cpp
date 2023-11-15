#include "Dog.hpp"

Dog::Dog() : _type( "Dog" ) {
	std::cout << "Cat default constructor called: " << _type << std::endl;
}

Dog::Dog( const std::string& type ) : _type( type ) {
	std::cout << "Dog constructor called: " << type << std::endl;
}

Dog::Dog( const Dog& original ) {
	std::cout << "Dog copy constructor called: " << _type << std::endl;
	this->_type = original._type;
}

Dog::~Dog() {
	std::cout << "Cat default destructor called: " << _type << std::endl;
}

Dog&	Dog::operator=( const Dog& other ) const {
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

void	Dog::makeSound( void ) {
	std::cout << _type << " barks" << std::endl;
}
