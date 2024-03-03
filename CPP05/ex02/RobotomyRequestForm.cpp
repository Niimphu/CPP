#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string& target ): AForm( "Robotomy Request Form", target, 72, 45 ) {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& original ): AForm( original.getName(), original.getTarget(), original.getGradeToSign(), original.getGradeToExecute() ) {}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& other ) {
	if ( this != &other ) {}
	return *this;
}

void	RobotomyRequestForm::execute( Bureaucrat const& bureaucrat ) const {
	(void)bureaucrat;
}
