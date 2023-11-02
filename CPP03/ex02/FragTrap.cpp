#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string& name ) : ClapTrap( name, 100, 100, 30 ) {
	std::cout << "FragTrap " << getName() << " assembled" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << getName() << " destroyed" << std::endl;
}

void	FragTrap::attack( const std::string& target ) {
	if ( getEnergyPoints() == 0 ) {
		std::cout << "FragTrap " << getName() << " does not have enough energy to attack" << std::endl;
		return ;
	}
	if ( getHitPoints() == 0 ) {
		std::cout << "FragTrap " << getName() << " is dead and cannot attack!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << getName() << " attacks " << target << " for " << getAttackDamage() << " damage" << std::endl;
	setEnergyPoints( getEnergyPoints() - 1 );
	return ;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << getName() << " high fives five guys" << std::endl;
}
