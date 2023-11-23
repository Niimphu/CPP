#include "Brain.hpp"

Brain::Brain( void ) {
	for (int i; i < 100; i++) {
		_ideas[i] = "";
	}
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( const Brain& original ) {
	_ideas = original._ideas;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain destroyed" << std::endl;
}

Brain	Brain::operator=( const Brain& other ) {
	if ( this != &other ) {
		for (int i; i < 100; i++) {
			this->_ideas[i] = other._ideas[i];
		}
	}
	std::cout << "Brain copy overload operator called" << std::endl;
}

void	Brain::setIdea( const int i, const std::string& idea ) {
	_ideas[i] = idea;

}
