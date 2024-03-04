#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "AForm.hpp"

# define TREES " \
                      &&& &&  & &&                          \n \
                   && &\/&\|& ()|/ @, &&                    \n \
                   &\/(/&/&||/& /_/)_&/_&                   \n \
                &() &\/&|()|/&\/ '%' & ()                   \n \
               &_\_&&_\ |& |&&/&__%_/_& &&                  \n \
    ###      &&   && & &| &| /& & % ()& /&&      ###        \n \
   #o###      ()&_---()&\&\|&&-&&--%---()~      #o###       \n \
 #####o###        &&     \|||                 #####o###     \n \
#o#/#|#/###               |||                #o#/#|#/###    \n \
 ###/|/#o#                |||                 ###/|/#o#     \n \
    }|{                   |||                    }|{        \n \
  -~}|{=-            , -=-~  .-^- _             ~}|{-       \n \
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
