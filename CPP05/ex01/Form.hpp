#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>

class Form {
	public:
	Form( void );
	Form ( Form& );
	~Form( void );

	Form	&operator=( Form& );

	private:



};

#endif
