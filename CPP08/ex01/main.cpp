#include "Span.hpp"
#include <iostream>
#include <string>

int	main(void) {
	Span	test = Span(4);
	try {
		std::cout << test.shortestSpan() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		test.addNumber(5);
		std::cout << test.longestSpan() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		test.addNumber(25);
		test.addNumber(2);
		test.addNumber(18);
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		test.addNumber(17);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
