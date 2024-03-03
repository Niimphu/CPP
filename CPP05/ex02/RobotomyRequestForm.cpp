#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ): AForm( "Robotomy Request Form", 72, 45 ) {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& original ): AForm( original.getName(), original.getGradeToSign(), original.getGradeToExecute() ) {}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& ) {
	if ( this != &other ) {}
	return *this;
}

void	RobotomyRequestForm::execute( Bureaucrat const& ) const {}
