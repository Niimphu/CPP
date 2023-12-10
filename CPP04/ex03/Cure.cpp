#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" ) {}

Cure::Cure( const Cure& original ) : AMateria( original ) {}

Cure::~Cure( void ) {}

Cure&	Cure::operator=( const Cure& other ) {
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

void	Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria*	Cure::clone( void ) const{
	return new Cure( *this );
}
