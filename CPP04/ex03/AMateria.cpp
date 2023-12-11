#include "AMateria.hpp"

AMateria::AMateria( void ) {}

AMateria::AMateria( const std::string& type ) : _type( type ) {
//	std::cout << _type << " Materia spawned" << std::endl;
}

AMateria::AMateria( const AMateria& original ) : _type( original._type ) {
//	std::cout << _type << " Materia copied" << std::endl;
}

AMateria::~AMateria( void ) {
//	std::cout << _type << " Materia destroyed" << std::endl;
}

void	AMateria::setType( const std::string& type ){
	_type = type;
}

const std::string&	AMateria::getType( void ) const {
	return _type;
}

void	AMateria::use( ICharacter& target ) {
	std::cout << "* " << _type << " was used against " << target.getName() << " *" << std::endl;
}
