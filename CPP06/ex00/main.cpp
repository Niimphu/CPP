#include "Type.hpp"
#include "ScalarConverter.hpp"
#include "identify.hpp"

int	main(void) {
	ScalarConverter::convert("a");
	ScalarConverter::convert("5");
	ScalarConverter::convert("42.0");
	ScalarConverter::convert("42.f");
	ScalarConverter::convert("+inf");
}
