#include "RPN.hpp"

int	main(int ac, char** av) {
	if (ac != 2) {
		std::cerr << "Error: invalid number of arguments" << std::endl;
		return 1;
	}

	std::string	input = std::string(av[1]);
	RPN	calculator;
	calculator.calculate(input);
	return 0;
}
