#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap( name + "_clap_name" ), ScavTrap( name ), FragTrap( name ), _name(name) {
	std::cout << "DiamondTrap " << _name << " assembled" << std::endl;
	setEnergyPoints(ScavTrap::getEnergyPoints());
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " destroyed" << std::endl;
}

void	DiamondTrap::setName( const std::string& name ) {
	_name = name;
}

std::string	DiamondTrap::getName( void ) {
	return _name;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "My name is " << _name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::getName() << std::endl;
}
