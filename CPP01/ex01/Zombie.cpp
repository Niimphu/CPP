#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie	( std::string name ) : _name(name) {}

Zombie::~Zombie( void ) {
	std::cout << _name << " is kill" << std::endl;
}
void	Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
