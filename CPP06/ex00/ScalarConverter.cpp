#include "ScalarConverter.hpp"
#include "identify.hpp"
#include "utils.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter&) {}

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter&) {
	return *this;
}

void	ScalarConverter::convert(const std::string& input) {
	Type	inputType;
	t_set	set;

	inputType = identify(input);
	switch (inputType) {
		case CHAR:
		{
			set = convertChar(input);
			break;
		}
		case INT:
		case FLOAT:
		case DOUBLE:
		{
			set = convertNumber(input);
			break;
		}
		case PSEUDO_DOUBLE:
		case PSEUDO_FLOAT:
		{
			set = convertPseudoLiteral(input);
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << set.f << "f" << std::endl;
			std::cout << "double: " << set.d << std::endl;
			return;
		}
		default:
		{
			std::cout << "Invalid input: " << input << std::endl;
			return;
		}
	}
	if (floor(set.f) != set.f || !isInIntRange(set.d) || set.i < 32 || set.i > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << set.c << std::endl;
	if (!isInIntRange(set.d))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << set.i << std::endl;
	std::cout << "float: " << set.f << decimalEnding(set, FLOAT) << std::endl;
	std::cout << "double: " << set.d << decimalEnding(set, DOUBLE) << std::endl;
}
