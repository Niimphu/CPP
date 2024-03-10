#include "ScalarConverter.hpp"
#include "Identifier.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter&) {}

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter&) {
	return *this;
}

void	ScalarConverter::convert(const std::string& input) {
	Type	inputType;

	inputType = Identifier::identify(input);
	switch (inputType) {
		case CHAR:
		{
			std::cout << "Char" << std::endl;
			break;
		}
		case INT:
		{
			std::cout << "Int" << std::endl;
			break;
		}
		case FLOAT:
		{
			std::cout << "Float" << std::endl;
			break;
		}
		case DOUBLE:
		{
			std::cout << "Double" << std::endl;
			break;
		}
		case PSEUDO_DOUBLE:
		{
			std::cout << "Pseudo double" << std::endl;
			break;
		}
		case PSEUDO_FLOAT:
		{
			std::cout << "Pseudo float" << std::endl;
			break;
		}
		default:
			std::cout << "??" << std::endl;
	}
}
