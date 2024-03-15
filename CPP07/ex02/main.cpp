#include "Array.hpp"
#include <sstream>

int	main(void) {
	Array<std::string>	strArray(4);
	for (size_t i = 0; i < 4; i++) {
		strArray[i] = "Pope";
		std::cout << "Index: " << i << " Value: " << strArray[i] << std::endl;
	}
	std::cout << std::endl << std::endl;

	Array<std::string>	strArrayCopy;
	strArrayCopy = strArray;
	for (size_t i = 0; i < 4; i++) {
		std::stringstream	ss;
		ss << (i + 1);
		strArrayCopy[i] += ss.str();
	}
	for (size_t i = 0; i < 4; i++) {
		std::cout << "Index: " << i << " Value: " << strArray[i] << std::endl;
	}
	for (size_t i = 0; i < 4; i++) {
		std::cout << "Index: " << i << " Value: " << strArrayCopy[i] << std::endl;
	}
	std::cout << std::endl << std::endl;

	try {
		std::cout << strArray[7] << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
