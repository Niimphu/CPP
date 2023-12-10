#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class AMateria;

class Character: public ICharacter{
public:
	Character( void );
	Character( const std::string& );
	~Character( void );

	const std::string&	getName( void ) const;
	void				equip( AMateria* );
	void				unequip( int );
	void				use( int, ICharacter& );

private:
	const std::string	_name;
	AMateria*			_inventory[4];


};

#endif
