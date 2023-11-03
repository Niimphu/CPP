#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap( const std::string& name ) : _name( name ), \
	_hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {
	std::cout << "ClapTrap " << _name << " assembled" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& original ) : _name( original._name ), _hitPoints( original._hitPoints ), \
			_energyPoints(original._energyPoints), _attackDamage( original._attackDamage ) {
	std::cout << "ClapTrap " << _name << " duplicated" << std::endl;
}

ClapTrap::ClapTrap( const std::string& name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) : \
	_name( name ), 	_hitPoints( hitPoints ), _energyPoints( energyPoints ), _attackDamage( attackDamage ){
	std::cout << "ClapTrap " << _name << " assembled" << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& other ) {
	if ( this != &other ) {
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
		std::cout << "ClapTrap " << this->_name << " has copied " << other._name << "'s stats" << std::endl;
	}
	return *this;
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
		std::cout << _name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << _name << " takes " << damage << " damage" << std::endl;
	if ( damage >= _hitPoints ) {
		std::cout << _name << " is now dead!" << std::endl;
		_hitPoints = 0;
		return ;
	}
	_hitPoints -= damage;
	std::cout << _name << " now has " << _hitPoints << " hitpoint(s)" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << _name << " is repaired for " << amount << " hitpoint(s)" << std::endl;
	_hitPoints += amount;
	std::cout << _name << " now has " << _hitPoints << " hitpoint(s)" << std::endl;
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
