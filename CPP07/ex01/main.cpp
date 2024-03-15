#include "iter.hpp"
#include <iostream>
#include <cctype>

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

void	capitaliseFirstLetter(std::string& string) {
	string[0] = std::toupper(string[0]);
}

void	halve(double& number) {
	number /= 2;
}
