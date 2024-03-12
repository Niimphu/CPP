#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

# include <iostream>
# include <string>

# include "Type.hpp"

# define DIGITS "0123456789"

Type	identify(const std::string&);

bool	isFloatPseudoLiteral(const std::string&);
bool	isDoublePseudoLiteral(const std::string&);
bool	isCharacter(const std::string&);
bool	isInteger(const std::string&);
bool	isFloat(const std::string&);
bool	isDouble(const std::string&);

size_t	skipSigns(const std::string&);

#endif
