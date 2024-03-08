#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

# include "Type.hpp"

class	ScalarConverter {
public:
	static void	convert( const std::string& );

private:
	ScalarConverter( void );
	ScalarConverter( const ScalarConverter );
	~ScalarConverter( void );

	ScalarConverter&	operator=( const ScalarConverter );


};

#endif
