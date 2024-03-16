#include "Array.hpp"
#include <sstream>

int	main(void) {
	Array<std::string>	strArray(4);
	for (size_t i = 0; i < 4; i++) {
		strArray[i] = "Pope";
	}
	strArray.print();
	std::cout << std::endl;

	Array<std::string>	strArrayCopy;
	strArrayCopy = strArray;
	for (size_t i = 0; i < 4; i++) {
		std::stringstream	ss;
		ss << (i + 1);
		strArrayCopy[i] += ss.str();
	}
	strArray.print();
	strArrayCopy.print();
	std::cout << std::endl;

	try {
		std::cout << strArrayCopy[2] << std::endl;
		std::cout << strArrayCopy[7] << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
