#include "Span.hpp"
#include <iostream>
#include <string>

int	main(void) {
	Span	test = Span(5);
	try {
		std::cout << test.shortestSpan() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		test.addNumber(6);
		std::cout << test.longestSpan() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		test.addNumber(3);
		test.addNumber(17);
		test.addNumber(9);
		test.addNumber(11);
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	Span	test2 = Span(20);
	try {
		test2.addRange(42, 61);
		std::cout << test2.shortestSpan() << std::endl;
		std::cout << test2.longestSpan() << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		test2.addNumber(42);
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
