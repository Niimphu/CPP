#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string& name ) : ClapTrap( name + "_clap_name" ),  ScavTrap( name ), FragTrap( name ) {
	_name = name;
	std::cout << "My name is " << _name << std::endl;
	std::cout << "My name ClapTrap name is " << ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " destroyed" << std::endl;
}

void	DiamondTrap::attack( const std::string& target ) {
	if ( getEnergyPoints() == 0 ) {
		std::cout << "DiamondTrap " << getName() << " does not have enough energy to attack" << std::endl;
		return ;
	}
	if ( getHitPoints() == 0 ) {
		std::cout << "DiamondTrap " << getName() << " is dead and cannot attack!" << std::endl;
		return ;
	}
	std::cout << "DiamondTrap " << getName() << " attacks " << target << " for " << getAttackDamage() << " damage" << std::endl;
	setEnergyPoints( getEnergyPoints() - 1 );
	return ;
}
