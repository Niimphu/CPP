#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string& name ) : _name(name), ClapTrap( name + "_clap_name" ), FragTrap( name ), ScavTrap( name ) {
	std::cout << "My name is " << _name << std::endl;
	std::cout << "My name ClapTrap name is " << ClapTrap::getName() << std::endl;
}

