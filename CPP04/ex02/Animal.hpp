#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal {
public:
	Animal( const Animal& );
	virtual ~Animal( void );

	Animal	&operator=( const Animal& );

	virtual void	makeSound( void ) const = 0;

	void	setType( const std::string& );

	std::string	getType( void ) const;

protected:
	Animal( void );
	Animal( const std::string& );

	std::string	_type;


};

#endif
