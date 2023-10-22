#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanA {

public:
	HumanA( const std::string&, const Weapon& );

	void	attack( void );

private:
	const std::string	_name;
	const Weapon&		_weapon;

};

#endif
