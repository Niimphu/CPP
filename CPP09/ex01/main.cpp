#include "RPN.hpp"

int	main(int ac, char** av) {
	if (ac != 2) {
		std::cerr << "Error" << std::endl;
		return 1;
	}

	std::string	input = std::string(av[1]);
	RPN	calculator;
	if (!calculator.isValid(input)) {
		std::cerr << "Error" << std::endl;
		return 1;
	}
	return 0;
}
