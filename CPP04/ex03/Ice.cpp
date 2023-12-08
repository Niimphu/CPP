#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" ) {}

Ice::~Ice( void ) {}

void	Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
