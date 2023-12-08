#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>
# include <string>

class WrongAnimal {
public:
	WrongAnimal( void );
	WrongAnimal( const std::string& );
	WrongAnimal( const WrongAnimal& );
	virtual ~WrongAnimal( void );

	WrongAnimal	&operator=( const WrongAnimal& );

	void	makeSound( void ) const ;

	void	setType( const std::string& );

	std::string	getType ( void ) const;

protected:
	std::string	_type;

};

#endif
