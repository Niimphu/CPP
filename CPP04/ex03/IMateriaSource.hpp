#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual	~IMateriaSource( void ) {}

	virtual void		learnMateria( AMateria* ) = 0;
	virtual AMateria*	createMateria( const std::string& ) = 0;

};

#endif
