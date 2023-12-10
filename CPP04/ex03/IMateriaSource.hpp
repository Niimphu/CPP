#ifndef IMATERIA_H
# define IMATERIA_H

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual	~IMateriaSource() {}

	virtual void		learnMateria( AMateria* ) = 0;
	virtual AMateria*	createMateria( const std::string& ) = 0;

};

#endif
