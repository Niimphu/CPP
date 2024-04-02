#include "PMergeMe.hpp"
#include <climits>
#include <cstdlib>
#include <sstream>
#include <algorithm>

PMergeMe::PMergeMe(void) {}

PMergeMe::PMergeMe(const PMergeMe&) {}

PMergeMe::~PMergeMe(void) {}

PMergeMe&	PMergeMe::operator=(const PMergeMe&) {
	return *this;
}

void	PMergeMe::sort(int ac, char** input) {
	_vec.reserve(ac - 1);
	parse(input);
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
		if (std::find(_vec.begin(), _vec.end(), value) != _vec.end()) {
			std::cerr << "Error: duplicate number: " << value << std::endl;
			return 1;
		}
		_vec.push_back(value);
		_deq.push_back(value);
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
