#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" ) {}

Ice::Ice( const Ice& original ) : AMateria( original ) {}

Ice::~Ice( void ) {}

Ice&	Ice::operator=( const Ice& other ) {
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

void	Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

AMateria*	Ice::clone( void ) const{
	return new Ice( *this );
}
