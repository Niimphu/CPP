#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "ice" ) {}

Cure::~Cure( void ) {}

void	Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
