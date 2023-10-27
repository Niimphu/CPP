#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class	Weapon {

public:
	Weapon();
	Weapon( const std::string& );

	void		setType( const std::string& );

	const std::string	getType( void );

private:
	std::string	_type;

};

#endif
