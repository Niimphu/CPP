#include "Brain.hpp"

Brain::Brain( void ) {
	for ( int i = 0; i < 100; i++ ) {
		_ideas[i] = "";
	}
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( const Brain& original ) {
	for ( int i = 0; i < 100; i++ ) {
		_ideas[i] = original._ideas[i];
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain destroyed" << std::endl;
}

Brain&	Brain::operator=( const Brain& other ) {
	if ( this != &other ) {
		for ( int i = 0; i < 100; i++ ) {
			this->_ideas[i] = other._ideas[i];
		}
	}
	std::cout << "Brain copy overload operator called" << std::endl;
	return *this;
}

void	Brain::setIdea( const std::string& idea ) {
	int	i = 0;

	while ( _ideas[i] != "" )
		i++;
	_ideas[i] = idea;
}

std::string	Brain::getIdea( const int& i ) {
	return _ideas[i];
}
