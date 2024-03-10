#include "Identifier.hpp"

#include <cctype>

Identifier::Identifier( void ) {}

Identifier::Identifier( const Identifier& ) {}

Identifier::~Identifier( void ) {}

Identifier&	Identifier::operator=( const Identifier& ) {
	return *this;
}

Type	Identifier::identify( const std::string& input ) {
	if ( isFloatPseudoLiteral( input ) )
		return PSEUDO_FLOAT;
	if ( isDoublePseudoLiteral( input ) )
		return PSEUDO_DOUBLE;
	return UNKNOWN;
}

bool	Identifier::isFloatPseudoLiteral( const std::string& input ) {
	for (int i = 0; i < 3; i++) {
		if ( !input.compare( P_FLOATS[i] ) )
			return true;
	}
	return false;
}

bool	Identifier::isDoublePseudoLiteral( const std::string& input ) {
	for (int i = 0; i < 3; i++) {
		if (!input.compare( P_DOUBLES[i] ) )
			return true;
	}
	return false;
}

bool	Identifier::isCharacter( const std::string& input ) {
	if ( input.length() == 1 && std::isprint( input[0] ) )
		return true;
	return false;
}


bool	Identifier::isInteger( const std::string& input ) {
	for ( size_t it = 0; it < input.length(); it++ ) {
		if ( !std::isdigit(input[it]) )
			return false;
		return true;
	}
	return false;
}

bool	Identifier::isFloat( const std::string& input ) {
	if ( input[0] )
		return true;
	return false;
}

bool	Identifier::isDouble( const std::string& input ) {
	if ( input[0] )
		return true;
	return false;
}
