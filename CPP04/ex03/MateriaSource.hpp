#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource
{
public:

	~MateriaSource( void ) {}

	void		learnMateria( AMateria* );
	AMateria*	createMateria( const std::string& );


};

#endif
