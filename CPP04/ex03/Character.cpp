#include "Character.hpp"

Character::Character( void ): _name( "Bob" ) {
	for ( int i = 0; i < 4; ++i ) {
		_inventory[i] = NULL;
	}
//	std::cout << "Default character created: " << _name << std::endl;
}

Character::Character( const std::string& name ) : _name( name ) {
	for ( int i = 0; i < 4; ++i ) {
		_inventory[i] = NULL;
	}
//	std::cout << "Character created: " << _name << std::endl;
}

Character::Character( const Character& original ) : _name( original._name ) {
	for ( int i = 0; i < 4; ++i ) {
		_inventory[i] = original._inventory[i]->clone();
	}
//	std::cout << "Character clone: " << _name << std::endl;
}

Character::~Character( void ) {
	for ( int i = 0; i < 4; ++i ) {
		if ( _inventory[i] ) {
			delete _inventory[i];
		}
	}
//	std::cout << "Character killed: " << _name << std::endl;
}

Character&	Character::operator=( const Character& other ) {
	if ( this != &other ) {
		this->_name = other._name;
		for ( int i = 0; i < 4; ++i ) {
			_inventory[i] = other._inventory[i]->clone();
		}
	}
	return *this;
}

void	Character::setName( const std::string& name ) {
	_name = name;
}

const std::string&	Character::getName( void ) const{
	return _name;
}

void	Character::equip( AMateria* m ) {
	for ( int i = 0; i < 4; ++i ) {
		if ( _inventory[i] == m ) {
//			std::cout << _name << " has already equipped this " << m->getType() << "!" << std::endl;
			return ;
		}
	}
	for ( int i = 0; i < 4; ++i ) {
		if ( _inventory[i] == NULL ) {
			_inventory[i] = m;
//			std::cout << _name << " has equipped " << m->getType() << std::endl;
			return ;
		}
	}
//	std::cout << _name << "'s inventory is full!" << std::endl;
}

void	Character::unequip( int idx ) {
	if ( _inventory[idx] == NULL ) {
//		std::cout << "There is nothing in slot " << idx << " to be unequipped" << std::endl;
		return ;
	}
//	std::cout << _name << " unequipped " << _inventory[idx]->getType() << std::endl;
	_inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter& target ) {
	if ( _inventory[idx] == NULL ) {
//		std::cout << "There is nothing in slot " << idx << " to be used" << std::endl;
		return ;
	}
	_inventory[idx]->use(target);
}
