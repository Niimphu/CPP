#ifndef CAT_H
# define CAT_H

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat: public Animal {
public:
	Cat( void );
	Cat( const Cat& );
	~Cat( void );

	Cat	&operator=( const Cat& );

	void	makeSound( void ) const;


private:
	Brain*	_brain;


};

#endif
