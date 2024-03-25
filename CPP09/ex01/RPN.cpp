#include "RPN.hpp"

RPN::RPN(void) {}

RPN::RPN(const RPN&) {}

RPN::~RPN(void) {}

RPN&	RPN::operator=(const RPN&) {
	return *this;
}

bool	RPN::isValid(const std::string& input) {
	if (input.find_first_not_of(DIGITS + OPERATORS + " ") != std::string::npos)
		return false;
	size_t	operandCount = 0;
	size_t	operatorCount = 0;
	for (size_t i = 0; i < input.length(); i++) {
		if (i % 2 != 0) {
			if (input[i] == ' ')
				continue;
			return false;
		}
		if (DIGITS.find(input[i]) != std::string::npos)
			operandCount++;
		else if (OPERATORS.find(input[i]) != std::string::npos)
			operatorCount++;
		else
			return false;
		if (operatorCount >= operandCount)
			return false;
	}
	return true;
}
