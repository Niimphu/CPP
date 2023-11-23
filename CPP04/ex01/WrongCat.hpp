#ifndef WRONGCAT_H
# define WRONGCAT_H

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
public:
	WrongCat( void );
	~WrongCat( void );

	WrongCat	&operator=( const WrongCat& );

	void	makeSound( void ) const;

};

#endif
