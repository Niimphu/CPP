#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ) {
	std::cout << "Dog default constructor called: " << _type << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog default destructor called: " << _type << std::endl;
}

Dog&	Dog::operator=( const Dog& other ) {
	if (this != &other) {
		this->_type = other._type;
	}
    std::cout << "Dog copy operator overload called" << std::endl;
	return *this;
}

void	Dog::makeSound( void ) const {
	std::cout << _type << " barks" << std::endl;
}
