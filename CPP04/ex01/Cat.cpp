#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) {
	std::cout << "Cat default constructor called: " << _type << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat default destructor called: " << _type << std::endl;
}

Cat&	Cat::operator=( const Cat& other ) {
	if (this != &other) {
		this->_type = other._type;
	}
    std::cout << "Cat copy operator overload called" << std::endl;
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << _type << " meows" << std::endl;
}
