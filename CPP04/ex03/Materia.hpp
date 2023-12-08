#ifndef MATERIA_H
# define MATERIA_H

# include <iostream>
# include "Character.hpp"

class AMateria{
public:
	AMateria( const std::string& );
	~AMateria( void );

	const std::string&	getType( void ) const;

	virtual AMateria*	clone( void ) const = 0;
	virtual void use( ICharacter& );


protected:
	AMateria( void );

	std::string	_type;


private:
	void	setType( const std::string& ) const;


};

#endif
