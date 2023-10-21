#include "HumanB.hpp"

HumanB::HumanB( const std::string& name ) : _name(name), _weapon(NULL) {}

void HumanB::attack( void ) {
	std::cout << _name << std::flush;
	if (_weapon == NULL)
		std::cout << " flails around wildly" << std::endl;
	std::cout << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon ) {
	_weapon = &weapon;
}
