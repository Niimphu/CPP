#include "ClapTrap.hpp"

ClapTrap::ClapTrap( const std::string& name ) : _name( name ), \
	_hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {
	std::cout << "ClapTrap " << _name << " assembled" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

void	ClapTrap::attack( const std::string& target ) {
	if ( _energyPoints == 0 ) {
		std::cout << "ClapTrap " << _name << " does not have enough energy to attack" << std::endl;
		return ;
	}
	if ( _hitPoints == 0 ) {
		std::cout << "ClapTrap " << _name << " is dead and cannot attack!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << " for " << _attackDamage << " damage" << std::endl;
	--_energyPoints;
	return ;
}

void	ClapTrap::takeDamage( unsigned int damage ) {
	if ( _hitPoints == 0 ) {
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " takes " << damage << " damage" << std::endl;
	if ( damage >= _hitPoints ) {
		std::cout << "ClapTrap " << _name << " is now dead!" << std::endl;
		_hitPoints = 0;
		return ;
	}
	_hitPoints -= damage;
	std::cout << "ClapTrap " << _name << " now has " << _hitPoints << " hitpoint(s)" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << "ClapTrap " << _name << " is repaired for " << amount << " hitpoint(s)" << std::endl;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " now has " << _hitPoints << " hitpoint(s)" << std::endl;
}

const std::string& ClapTrap::getName( void ) const {
	return _name;
}

unsigned int	ClapTrap::getHitPoints( void ) {
	return _hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints( void ) {
	return _energyPoints;
}

unsigned int	ClapTrap::getAttackDamage( void ) {
	return _attackDamage;
}

void	ClapTrap::setHitPoints( unsigned int amount ) {
	_hitPoints = amount;
}

void	ClapTrap::setEnergyPoints( unsigned int amount ) {
	_energyPoints = amount;
}

void	ClapTrap::setAttackDamage( unsigned int amount ) {
	_attackDamage = amount;
}
