#include "Type.hpp"
#include "Identifier.hpp"

Identifier::Identifier( void ) {}

Identifier::Identifier( const Identifier& original ) {
	(void)original;
}

Identifier::~Identifier( void ) {}

Identifier&	Identifier::operator=( const Identifier& other ) {
	if ( this != &other ) {}
	return *this;
}

Type	Identifier::Identify( const std::string& input ) {
	if ( isFloatPseudoLiteral( input ) )
		return PSEUDO_FLOAT;
	if ( isDoublePseudoLiteral( input ) )
		return PSEUDO_DOUBLE;
}

bool	isFloatPseudoLiteral( const std::string& input ) {
	for (int i = 0; i < 3; i++) {
		if ( !input.compare( P_FLOATS[i] ) )
			return true;
	}
	return false;
}

bool	isDoublePseudoLiteral( const std::string& input ) {
	for (int i = 0; i < 3; i++) {
		if (!input.compare( P_DOUBLES[i] ) )
			return true;
	}
	return false;
}


