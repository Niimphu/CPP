#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>

class Brain {
public:
	Brain( void );
	Brain( const Brain& );
	~Brain( void );

	Brain	&operator=( const Brain& );

	void	setIdea( const int, const std::string& );

	std::string	getIdea( const int );


private:
	std::string	_ideas[100];

};

#endif
