#include "identify.hpp"
#include "utils.hpp"

#include <cctype>

Type	identify(const std::string& input) {
	if (isFloatPseudoLiteral(input))
		return PSEUDO_FLOAT;
	if (isDoublePseudoLiteral(input))
		return PSEUDO_DOUBLE;
	if (isCharacter(input))
		return CHAR;
	if (isInteger(input))
		return INT;
	if (isDouble(input))
		return DOUBLE;
	if (isFloat(input))
		return FLOAT;
	return UNKNOWN;
}

bool	isFloatPseudoLiteral(const std::string& input) {
	for (int i = 0; i < 3; i++) {
		if (!input.compare(P_FLOATS[i]))
			return true;
	}
	return false;
}

bool	isDoublePseudoLiteral(const std::string& input) {
	for (int i = 0; i < 3; i++) {
		if (!input.compare(P_DOUBLES[i]))
			return true;
	}
	return false;
}

bool	isCharacter(const std::string& input) {
	if (input.length() != 1 || !std::isprint(input[0]) || std::isdigit(input[0]))
		return false;
	return true;
}

bool	isInteger(const std::string& input) {
	size_t	pos = input.find_first_not_of(DIGITS);
	if (pos != std::string::npos)
		return false;
	return true;
}

bool	isFloat(const std::string& input) {
	size_t	pos = input.find_first_not_of(DIGITS + std::string(".f"));
	if (pos != std::string::npos)
		return false;

	int	decimalPointCount = charCount(input, '.');
	int	fCount = charCount(input, 'f');
	if (decimalPointCount > 1)
		return false;
	if (fCount > 1 || (fCount == 1 && input.find('f') != input.length() - 1))
		return false;
	return true;
}

bool	isDouble(const std::string& input) {
	size_t	pos = input.find_first_not_of(DIGITS + std::string("."));
	if (pos != std::string::npos)
		return false;

	int	decimalPointCount = charCount(input, '.');
	if (decimalPointCount > 1)
		return false;
	return true;
}

size_t	skipSigns(const std::string& input) {
	size_t pos = input.find_first_not_of("+-");

	if (pos == std::string::npos)
		return 0;
	return pos;
}
