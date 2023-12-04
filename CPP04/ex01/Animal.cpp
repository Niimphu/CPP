#include "Animal.hpp"
#include "Brain.hpp"

Animal::Animal( void ) : _type( "Animal" ), _brain( NULL ) {
	_brain = new Brain();
	std::cout << "Animal default constructor called: " << _type << std::endl;
}

Animal::Animal( const std::string& type ) : _type( type ) {
	_brain = new Brain();
	std::cout << "Animal constructor called: " << type << std::endl;
}

Animal::Animal( const Animal& original ) {
	this->_type = original._type;
	this->_brain = original._brain;
	std::cout << "Animal copy constructor called: " << _type << std::endl;
}

Animal::~Animal( void ) {
	delete _brain;
	std::cout << "Animal default destructor called: " << _type << std::endl;
}

Animal&	Animal::operator=( const Animal& other ) {
	if ( this != &other ) {
		this->_type = other._type;
	}
	std::cout << "Animal copy operator overload called: " << _type << std::endl;
	return *this;
}

void	Animal::makeSound( void ) const {
	std::cout << "*Generic animal noises*" << std::endl;
}

void	Animal::setType( const std::string& type ) {
	_type = type;
	std::cout << "Animal::setType called: " << _type << std::endl;
}

std::string	Animal::getType( void ) const {
	std::cout << "Animal::getType called: " << _type << std::endl;
	return _type;
}

void	Animal::newIdea( void ) {
}
