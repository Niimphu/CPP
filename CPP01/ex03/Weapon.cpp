#include "Weapon.hpp"

Weapon::Weapon() : _type("sheer willpower") {}

Weapon::Weapon( const std::string& type ) : _type(type) {}

void	Weapon::setType( const std::string& type ) {
	_type = type;
}

const std::string	Weapon::getType() {
	return _type;
}
