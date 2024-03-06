#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string& target ): AForm( "Presidential Pardon Form", target, 25, 5 ) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& original ): AForm( original.getName(), original.getTarget(), original.getGradeToSign(), original.getGradeToExecute() ) {}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& other ) {
	if ( this != &other ) {}
	return *this;
}

void	PresidentialPardonForm::execute( Bureaucrat const& executor ) const {
	checkExecutionEligibility( executor );

	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
