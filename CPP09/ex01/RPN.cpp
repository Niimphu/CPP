#include "RPN.hpp"

RPN::RPN(void) {}

RPN::RPN(const RPN& original) {}

RPN::~RPN(void) {}

RPN&	RPN::operator=(const RPN& other) {
	if (this != &other) {}
	return *this;
}

void		RPN::setOperands(const std::map<int>& operands) {
	_operands = operands;
}

std::map<int>	RPN::getOperands(void) {
	return _operands;
}

void		RPN::setOperators(const std::map<int>& operators) {
	_operators = operators;
}

std::map<int>	RPN::getOperators(void) {
	return _operators;
}
