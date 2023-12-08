#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include "Materia.hpp"

class AMateria;

class ICharacter{
public:
	ICharacter( const std::string& );
	~ICharacter( void );

	const std::string&	getName( void ) const;


private:
	ICharacter( void );

	const std::string	_name;
	AMateria*			_inventory[4];


};

#endif
