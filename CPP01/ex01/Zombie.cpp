#include "Zombie.hpp"

Zombie::Zombie	( std::string name ) : _name(name) {}

Zombie::~Zombie( void ) {
	std::cout << _name << " is kill" << std::endl;
}
