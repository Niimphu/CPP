#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class	Weapon {

public:
	Weapon();
	Weapon( const std::string& );

	void		setType( const std::string& );

	std::string	getType( void ) const ;

private:
	std::string	_type;

};

#endif
