#ifndef ICHARACTER_H
# define ICHARACTER_H

# include <iostream>
# include "Materia.hpp"

class AMateria;

class ICharacter
{
public:
	virtual	~ICharacter( void ) {}

	virtual const std::string&	getName( void ) const = 0;
	virtual void				equip( AMateria* ) = 0;
	virtual void				unequip( int ) = 0;
	virtual void				use( int, ICharacter& ) = 0;

};

#endif