#include "easyfind.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <deque>

int	main(void) {
	std::vector<int> vec;
	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(6);
	try {
		std::cout << std::distance(vec.begin(), easyfind(vec, 6)) << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::deque<double> deq;
	deq.push_back(1.2);
	deq.push_back(2.2);
	deq.push_back(3.2);
	try {
		std::cout << std::distance(deq.begin(), easyfind(deq, 6)) << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}
