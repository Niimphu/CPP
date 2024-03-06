#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class	ScalarConverter {
public:
	ScalarConverter&	operator=( const ScalarConverter& );


private:
	ScalarConverter( void );
	ScalarConverter( const ScalarConverter& );
	~ScalarConverter( void );

};

#endif
