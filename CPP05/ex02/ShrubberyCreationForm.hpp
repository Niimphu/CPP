#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class	ShrubberyCreationForm: public AForm {
public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( const ShrubberyCreationForm& );
	~ShrubberyCreationForm( void );

	ShrubberyCreationForm&	operator=( const ShrubberyCreationForm& );

	void	execute( Bureaucrat const& ) const;

};

#endif
