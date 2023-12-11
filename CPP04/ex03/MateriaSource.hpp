#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
public:
	MateriaSource( void );
	MateriaSource( const MateriaSource& );
	~MateriaSource( void );

	MateriaSource&	operator=( const MateriaSource& );

	void		learnMateria( AMateria* );
	AMateria*	createMateria( const std::string& );


private:
	AMateria*	_library[4];


};

#endif
