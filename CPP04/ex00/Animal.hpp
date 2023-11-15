#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

class Animal {
public:
	Animal();
	Animal( const std::string& );
	Animal( const Animal& );
	~Animal();

	Animal	&operator=( const Animal& );

	virtual void	makeSound( void ) const;

	void	setType( const std::string& );

	std::string	getType( void ) const;

protected:
	std::string	_type;


};

#endif
