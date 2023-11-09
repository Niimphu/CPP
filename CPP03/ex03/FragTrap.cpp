#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->_hitPoints = 100;
	if ( this->_energyPoints == DEFAULT_CT_ENERGYPOINTS ) {
		this->_energyPoints = 100;
	}
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const std::string& name ) : ClapTrap( name ) {
	this->_hitPoints = 100;
	if ( this->_energyPoints == DEFAULT_CT_ENERGYPOINTS ) {
		this->_energyPoints = 100;
	}
	this->_attackDamage = 30;
	std::cout << "FragTrap " << getName() << " assembled" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << getName() << " destroyed" << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << getName() << " high fives five guys" << std::endl;
}
