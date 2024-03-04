#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "AForm.hpp"

# define TREES " \
    ###            ###             ### \n \
   #o###          #o###           #o### \n \
 #####o###      #####o###       #####o### \n \
#o#/#|#/###    #o#/#|#/###     #o#/#|#/### \n \
 ###/|/#o#      ###/|/#o#       ###/|/#o# \n \
    }|{            }|{             }|{    \n \
    }|{            }|{             }|{ \n \
------------------------------------------- \n \
"

class	ShrubberyCreationForm: public AForm {
public:
	ShrubberyCreationForm( const std::string& = std::string( "Garden" ) );
	ShrubberyCreationForm( const ShrubberyCreationForm& );
	~ShrubberyCreationForm( void );

	ShrubberyCreationForm&	operator=( const ShrubberyCreationForm& );

	void	execute( Bureaucrat const& ) const;

};

#endif
