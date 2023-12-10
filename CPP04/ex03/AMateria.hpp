#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include "Character.hpp"

class ICharacter;

class AMateria{
public:
	AMateria( const std::string& );
	Amateria( const Amateria& );
	virtual ~AMateria( void );

	const std::string&	getType( void ) const;

	virtual AMateria*	clone( void ) const = 0;
	virtual void use( ICharacter& );


protected:
	AMateria( void );

	std::string	_type;


private:
	void	setType( const std::string& );


};

#endif
