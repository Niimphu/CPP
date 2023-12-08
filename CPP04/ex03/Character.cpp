#include "Character.hpp"

ICharacter::ICharacter( void ) {}

ICharacter::ICharacter( const std::string& name ) : _name( name ) {
	for ( int i = 0; i < 4; ++i ) {
		_inventory[i] = NULL;
	}
	std::cout << "Character created: " << _name << std::endl;
}

ICharacter::~ICharacter( void ) {}
