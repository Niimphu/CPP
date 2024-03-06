#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

AForm*	Intern::makeForm( const std::string& name, const std::string& target ) const {
	std::string	formNames[] = { "Shrubbery Creation", "Robotomy Request", "Presidential Pardon" };
	int			i;
	for ( i = 0; i < 3; i++ ) {
		if ( !formNames[i].compare( name ) )
			break;
	}
	AForm*	result;
	switch ( i ) {
		case	0:
			result = this->newShrubberyCreationForm( target );
			break;
		case	1:
			result = this->newRobotomyRequestForm( target );
			break;
		case	2:
			result = this->newPresidentialPardonForm( target );
			break;
		default: {
			throw Intern::FormNotFound();
		}
	}
	std::cout << "Intern creates " << result->getName() << std::endl;
	return result;
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
