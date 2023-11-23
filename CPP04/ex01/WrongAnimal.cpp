#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const std::string& type ) : _type( type ) {
	std::cout << "WrongAnimal constructor called: " << _type << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& original ) : _type( original._type ) {
	std::cout << "WrongANimal copy constructor called: " << _type << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal default destructor called: " << _type << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& other ) {
	if ( this != &other ) {
		this->_type = other._type;
	}
	std::cout << "WrongAnimal copy operator overload called: " << _type << std::endl;
	return *this;
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "*incorrect animal noises*" << std::endl;
}

void	WrongAnimal::setType( const std::string& type ) {
	_type = type;
}

std::string	WrongAnimal::getType( void ) const {
	return _type;
}
