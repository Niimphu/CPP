#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal( "WrongCat" ) {
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "Default WrongCat destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& other ) {
	if ( this != &other ) {
		this->_type = other._type;
	}
	std::cout << "WrongAnimal copy operator overload called: " << _type << std::endl;
	return *this;
}

void	WrongCat::makeSound( void ) const {
	std::cout << _type << " meows wrongly" << std::endl;
}
