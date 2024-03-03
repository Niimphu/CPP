#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ): AForm( "Shrubbery Creation Form", target, 145, 137 ) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& original ): AForm( original.getName(), original.getTarget(), original.getGradeToSign(), original.getGradeToExecute() ) {}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other ) {
	if ( this != &other ) {}
	return *this;
}

void	ShrubberyCreationForm::execute( Bureaucrat const& bureaucrat ) const {
	checkBureaucratGradeForExecution( bureaucrat );
}
