#ifndef ICE_H
# define ICE_H

# include <iostream>
# include "Materia.hpp"

class Ice: public AMateria{
public:
	Ice( void );
	~Ice( void );

	void		use( ICharacter& );
	AMateria*	clone( void ) const;

};

#endif
