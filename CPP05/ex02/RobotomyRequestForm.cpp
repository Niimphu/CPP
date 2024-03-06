#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm( const std::string& target ): AForm( "Robotomy Request Form", target, 72, 45 ) {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& original ): AForm( original.getName(), original.getTarget(), original.getGradeToSign(), original.getGradeToExecute() ) {}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& other ) {
	if ( this != &other ) {}
	return *this;
}

void	RobotomyRequestForm::execute( Bureaucrat const& executor ) const {
	checkBureaucratGradeForExecution( executor );

	std::cout << std::string( DRILL_NOISES ) << std::endl;

	if ( coinFlip() ) {
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	}
	else {
		std::cout << getTarget() << "'s robotomy has failed" << std::endl;
	}
}

bool	RobotomyRequestForm::coinFlip( void ) const {
	unsigned int	seed = static_cast<unsigned int>( std::time( NULL ) );
	seed = ( seed * 1103515245 + 12345 ) & 0x7fffffff;
	return seed % 2 == 0;
}
