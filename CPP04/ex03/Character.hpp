#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class AMateria;

class Character: public ICharacter {
public:
	Character( void );
	Character( const std::string& );
	Character( const Character& );
	~Character( void );

	Character&	operator=( const Character& );

	const std::string&	getName( void ) const;
	void				equip( AMateria* );
	void				unequip( int );
	void				use( int, ICharacter& );

private:
	std::string	_name;
	AMateria*	_inventory[4];

	void	setName( const std::string& );

};

#endif
