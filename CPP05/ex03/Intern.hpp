#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

enum FormName {
	"shrubbery creation",
	"robotomy request",
	"presidential pardon"
};

class	AForm;

class	Intern {
public:
	Intern( void );
	~Intern( void );

	AForm*	makeForm( const std::string&, const std::string& ) const;

	AForm*	newShrubberyCreationForm( const std::string& ) const;
	AForm*	newRobotomyRequestForm( const std::string& ) const;
	AForm*	newPresidentialPardonForm( const std::string& ) const;

	class	FormNotFound : public std::exception {
	public:
		const char* what() const throw() {
			return "Form not found";
		}
	};

};

std::string	toLower( const std::string& );

#endif
