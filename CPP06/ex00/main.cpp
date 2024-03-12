#include "Type.hpp"
#include "ScalarConverter.hpp"
#include "identify.hpp"

int	main(void) {
	ScalarConverter::convert("a");
	std::cout << std::endl;
	ScalarConverter::convert("41");
	std::cout << std::endl;
	ScalarConverter::convert("42.0f");
	std::cout << std::endl;
	ScalarConverter::convert("-20.0");
	std::cout << std::endl;
	ScalarConverter::convert("-inff");
	std::cout << std::endl;
}
