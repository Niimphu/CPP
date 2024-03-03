#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): AForm( "Presidential Pardon Form", 25, 5 ) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& original ): AForm( original.getName(), original.getGradeToSign(), original.getGradeToExecute() ) {}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& ) {
	if ( this != &other ) {}
	return *this;
}

void	PresidentialPardonForm::execute( Bureaucrat const& ) const {}
