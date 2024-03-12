#include "Type.hpp"
#include "ScalarConverter.hpp"
#include "identify.hpp"

int	main(int ac, char** av) {
	if (ac != 2) {
		std::cerr << "Usage: " << av[0] << " <input>" << std::endl;
		return 1;
	}
	ScalarConverter::convert(av[1]);
}
