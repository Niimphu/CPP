#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ), _brain( new Brain() ) {
	std::cout << "Cat default constructor called: " << _type << std::endl;
}

Cat::Cat( const Cat& other ) : Animal( other ), _brain( new Brain( *other._brain ) ) {
	std::cout << "Cat copy constructor called: " << _type << std::endl;
}

Cat::~Cat( void ) {
	delete _brain;
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
