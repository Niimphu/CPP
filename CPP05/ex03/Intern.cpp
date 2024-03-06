#include "Intern.hpp"
#include <cctype>

Intern::Intern() {}

Intern::~Intern() {}

AForm*	Intern::makeForm( const std::string& name, const std::string& target ) const {
	std::string	formNames[] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	int			i;
	for ( i = 0; i < 3; i++ ) {
		if ( !formNames[i].compare( toLower( name ) ) )
			break;
	}
	switch ( i ) {
		case	0:
			this->newShrubberyCreationForm( target );
			break;
		case 1:
			this->newRobotomyRequestForm( target );
			break;
		case 2:
			this->newPresidentialPardonForm( target );
			break:
		case 3: {
			throw Intern::FormNotFound();
		}
	}
}

AForm*	newShrubberyCreationForm( const std::string& target ) const {
	return new ShrubberyCreationForm( target );
}

AForm*	newRobotomyRequestForm( const std::string& target ) const {
	return new RobotomyRequestForm( target );
}

AForm*	newPresidentialPardonForm( const std::string& target ) const {
	return new PresidentialPardonForm( target );
}

std::string	toLower( const std::string& string ) {
	std::string	result;
	result.reserve( string.length() );

	for ( char c : string ) {
		result += std::tolower(c);
	}

	return result;
}
