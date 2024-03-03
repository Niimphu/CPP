#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ): AForm( "Shrubbery Creation Form", 145, 137 ) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& original ): AForm( original.getName(), original.getGradeToSign(), original.getGradeToExecute() ) {}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& ) {
	if ( this != &other ) {}
	return *this;
}

void	ShrubberyCreationForm::execute( Bureaucrat const& ) const {}
