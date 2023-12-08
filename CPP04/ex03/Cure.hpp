#ifndef CURE_H
# define CURE_H

# include <iostream>
# include "Materia.hpp"

class Cure{
public:
	Cure( void );
	~Cure( void );

	void	use( ICharacter& );


};

#endif