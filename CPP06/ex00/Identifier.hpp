#ifndef IDENTIFIER_HPP
# define IDENTIFIER_HPP

# include <iostream>
# include <string>

# include "Type.hpp"

class	Identifier {
public:
	Type	Identify( const std::string& );

private:
	Identifier( void );
	Identifier( const Identifier& );
	~Identifier( void );

	Identifier&	operator=( const Identifier& );


private:

};

#endif
