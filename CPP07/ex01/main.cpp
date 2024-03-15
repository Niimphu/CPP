#include "iter.hpp"
#include <iostream>
#include <cctype>

template<typename T>
void	printArray(T*, size_t);
void	capitaliseFirstLetter(std::string&);
void	halve(double&);

int	main(void) {
	std::string	names[] = {"john", "Sarah", "bleebleblorp"};
	printArray(names, 3);
	iter(names, 3, capitaliseFirstLetter);
	printArray(names, 3);
	std::cout << std::endl;

	double	numbers[] = {10.2, 42.0, 3.01, 8.888};
	printArray(numbers, 4);
	iter(numbers, 4, halve);
	printArray(numbers, 4);
	return 0;
}

template<typename T>
void	printArray(T* array, size_t length) {
	for (size_t i = 0; i < length; i++) {
		std::cout << (i == 0 ? "" : ", ") << array[i];
	}
	std::cout << std::endl;
}

void	capitaliseFirstLetter(std::string& string) {
	string[0] = std::toupper(string[0]);
}

void	halve(double& number) {
	number /= 2;
}
