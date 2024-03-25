#include "RPN.hpp"
#include <climits>

RPN::RPN(void) {}

RPN::RPN(const RPN&) {}

RPN::~RPN(void) {}

RPN&	RPN::operator=(const RPN&) {
	return *this;
}

void	RPN::calculate(const std::string& input) {
	if (!isValid(input)) {
		std::cerr << "Error: invalid input" << std::endl;
		return ;
	}
	int	result = doTheMaths(input);
	if (result == INT_MIN) {
		std::cerr << "Error: division by 0" << std::endl;
		return ;
	}
	std::cout << result << std::endl;
}

bool	RPN::isValid(const std::string& input) {
	if (input.empty())
		return false;
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

int	RPN::doTheMaths(const std::string& input) {
	std::stack<int>	stack;

	for (size_t i = 0; i < input.length(); i += 2) {
		if (DIGITS.find(input[i]) != std::string::npos)
			stack.push((input[i] - '0'));
		if (OPERATORS.find(input[i]) != std::string::npos) {
			int	operand2 = stack.top();
			stack.pop();
			int	operand1 = stack.top();
			stack.pop();
			switch (input[i]) {
				case '+':
					stack.push(operand1 + operand2);
					break;
				case '-':
					stack.push(operand1 - operand2);
					break;
				case '*':
					stack.push(operand1 * operand2);
					break;
				case '/':
					if (operand2 == 0) {
						return INT_MIN;
					}
					stack.push(operand1 / operand2);
					break;
			}
		}
	}
	return stack.top();
}
