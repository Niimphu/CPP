#include "PMergeMe.hpp"
#include <climits>
#include <cstdlib>
#include <sstream>
#include <algorithm>
#include <ctime>

PMergeMe::PMergeMe(void) {}

PMergeMe::PMergeMe(const PMergeMe&) {}

PMergeMe::~PMergeMe(void) {}

PMergeMe&	PMergeMe::operator=(const PMergeMe&) {
	return *this;
}

void	PMergeMe::sort(int elementCount, char** input) {
	clock_t	start = clock();

	_input = new int[elementCount];
	if (parse(input) != 0) {
		delete _input;
		return ;
	}
	clock_t	parseTime = clock() - start;

	vecSort(elementCount);
	clock_t	vecTimeToSort = clock() - start;


	clock_t	deqTimeToSort = clock() - vecTimeToSort + parseTime;

	_vecTime = (double)(vecTimeToSort) / CLOCKS_PER_SEC * 1000000;
	_deqTime = (double)(deqTimeToSort) / CLOCKS_PER_SEC * 1000000;

	std::cout << "Before:  ";
	for (int i = 0; i < elementCount; ++i) {
		std::cout << _input[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "After    ";
	for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << elementCount << " elements with std::vector<int> : " << _vecTime << " us" << std::endl;
	std::cout << std::endl;

	delete _input;
}

void	PMergeMe::vecSort(int elementCount) {
	_vec.reserve(elementCount);
	_vec = std::vector<int>(_input, _input + elementCount);

}

int	PMergeMe::parse(char** input) {
	for (size_t i = 1; input[i]; i++) {
		if (!isValidUInt(std::string(input[i]))) {
			std::cerr << "Error: invalid number: " << input[i] << std::endl;
			return 1;
		}
		std::istringstream	iss(input[i]);
		int	value;
		if (!(iss >> value)) {
			std::cerr << "Error: conversion to int failed" << std::endl;
			return 1;
		}
		for (size_t j = 0; j < i; j++) {
			if (_input[j] == value) {
				std::cerr << "Error: duplicate number: " << value << std::endl;
				return 1;
			}
		}
		_input[i - 1] = value;
	}
	return 0;
}

bool	isValidUInt(const std::string& intString) {
	if (intString.find_first_not_of(DIGITS) != std::string::npos)
		return false;
	char*	endPtr;
	if (intString.length() > 10 || strtoul(intString.c_str(), &endPtr, 10) > UINT_MAX || *endPtr != '\0')
		return false;
	return true;
}
