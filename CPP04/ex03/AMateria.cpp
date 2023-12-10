#include "AMateria.hpp"

AMateria::AMateria( void ) {}

AMateria::AMateria( const std::string& type ) : _type( type ) {
	std::cout << _type << " Materia spawned" << std::endl;
}

AMateria::~AMateria( void ) {
	std::cout << _type << " Materia destroyed" << std::endl;
}

void	AMateria::setType( const std::string& type ){
	_type = type;
}

const std::string&	AMateria::getType( void ) const {
	return _type;
}
