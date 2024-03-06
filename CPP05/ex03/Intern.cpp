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
			return this->newShrubberyCreationForm( target );
		case	1:
			return this->newRobotomyRequestForm( target );
		case	2:
			return this->newPresidentialPardonForm( target );
		default: {
			throw Intern::FormNotFound();
		}
	}
}

AForm*	Intern::newShrubberyCreationForm( const std::string& target ) const {
	return new ShrubberyCreationForm( target );
}

AForm*	Intern::newRobotomyRequestForm( const std::string& target ) const {
	return new RobotomyRequestForm( target );
}

AForm*	Intern::newPresidentialPardonForm( const std::string& target ) const {
	return new PresidentialPardonForm( target );
}

std::string	toLower( const std::string& string ) {
	std::string	result;
	result.reserve( string.length() );

	for (std::string::const_iterator it = string.begin(); it != string.end(); ++it) {
		result += std::tolower(*it);
	}

	return result;
}
