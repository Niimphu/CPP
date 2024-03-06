#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# define DRILL_NOISES "*LOUD AND DUBIOUS DRILLING NOISES*"

class	RobotomyRequestForm: public AForm {
public:
	RobotomyRequestForm( const std::string& = std::string( "Dummy" ) );
	RobotomyRequestForm( const RobotomyRequestForm& );
	~RobotomyRequestForm( void );

	RobotomyRequestForm&	operator=( const RobotomyRequestForm& );

	void	execute( Bureaucrat const& ) const;
	bool	coinFlip( void ) const;

};

#endif
