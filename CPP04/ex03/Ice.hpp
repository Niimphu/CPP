#ifndef ICE_H
# define ICE_H

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria{
public:
	Ice( void );
	~Ice( void );

	void		use( ICharacter& );
	AMateria*	clone( void ) const;

};

#endif
