#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const std::string& name ) : ClapTrap( name, 100, 50, 20 ) {
	std::cout << "ScavTrap " << getName() << " assembled" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << getName() << " destroyed" << std::endl;
}

void	ScavTrap::attack( const std::string& target ) {
	if ( getEnergyPoints() == 0 ) {
		std::cout << "ScavTrap " << getName() << " does not have enough energy to attack" << std::endl;
		return ;
	}
		if ( getHitPoints() == 0 ) {
			std::cout << "ScavTrap " << getName() << " is dead and cannot attack!" << std::endl;
			return ;
		}
	std::cout << "ScavTrap " << getName() << " attacks " << target << " for " << getAttackDamage() << " damage" << std::endl;
	setEnergyPoints( getEnergyPoints() - 1 );
	return ;
}

void	ScavTrap::guardGate() {
	std::cout << getName() << " is now in Gatekeeper mode" << std::endl;
}
