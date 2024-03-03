#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class	RobotomyRequestForm: public AForm {
public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( const RobotomyRequestForm& );
	~RobotomyRequestForm( void );

	RobotomyRequestForm&	operator=( const RobotomyRequestForm& );

	void	execute( Bureaucrat const& ) const;

};

#endif