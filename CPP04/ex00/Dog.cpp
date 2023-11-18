#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ) {
	std::cout << "Cat default constructor called: " << _type << std::endl;
}

Dog::~Dog() {
	std::cout << "Cat default destructor called: " << _type << std::endl;
}

Dog&	Dog::operator=( const Dog& other ) {
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << _type << " barks" << std::endl;
}
