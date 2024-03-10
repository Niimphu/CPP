#ifndef IDENTIFIER_HPP
# define IDENTIFIER_HPP

# include <iostream>
# include <string>

# include "Type.hpp"

class	Identifier {
public:
	static Type	identify( const std::string& );

	static bool	isFloatPseudoLiteral( const std::string& );
	static bool	isDoublePseudoLiteral( const std::string& );
	static bool	isCharacter( const std::string& );
	static bool	isInteger( const std::string& );
	static bool	isFloat( const std::string& );
	static bool	isDouble( const std::string& );

private:
	Identifier( void );
	Identifier( const Identifier& );
	~Identifier( void );

	Identifier&	operator=( const Identifier& );


private:

};

#endif
