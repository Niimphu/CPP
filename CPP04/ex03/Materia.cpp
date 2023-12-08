#include "Materia.hpp"

AMateria::AMateria( void ) {}

AMateria::AMateria( const std::string& type ) : _type( type ) {
	std::cout << "Materia " << _type << " spawned" << std::endl;
}

AMateria::~AMateria( void ) {
	std::cout << "Materia " << _type << " destroyed" << std::endl;
}

void	AMateria::setType( const std::string& type ){
	_type = type;
}

const std::string&	AMateria::getType( void ) const {
	return _type;
}
