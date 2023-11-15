#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat"
	std::cout << "Cat default constructor called: " << _type << std::endl;
}

Cat::Cat( const std::string& type ) {
	std::cout << "Cat constructor called: " << type << std::endl;
}

Cat::Cat( const Cat& original ) {
	std::cout << "Cat copy constructor called: " << _type << std::endl;
	this->_type = original._type;
}

Cat::~Cat() {
	std::cout << "Cat default destructor called: " << _type << std::endl;
}

Cat&	Cat::operator=( const Cat& other ) {
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

void	Cat::makeSound( void ) const {
	std::cout << _type << " meows" << std::endl;
}
