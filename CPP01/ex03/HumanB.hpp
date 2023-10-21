#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanB {

public:
	HumanB( void );
	HumanB( const std::string& );

	void	setWeapon( Weapon& );
	void	attack( void );

private:
	const std::string	_name;
	Weapon*				_weapon;

};

#endif