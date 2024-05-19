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

	_input = new int[elementCount];
	if (parse(input) != 0) {
		delete _input;
		return ;
	}

	clock_t	startVec = clock();
	vecSort(elementCount);
	clock_t	vecTimeToSort = clock() - startVec;

	clock_t	startDeq = clock();
	deqSort(elementCount);
	clock_t	deqTimeToSort = clock() - startDeq;

	_vecTime = (double)(vecTimeToSort) / CLOCKS_PER_SEC * 1000000;
	_deqTime = (double)(deqTimeToSort) / CLOCKS_PER_SEC * 1000000;

	std::cout << "Before:  ";
	for (int i = 0; i < elementCount; ++i) {
		std::cout << _input[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "After:   ";
	for (std::vector<int>::iterator it = _vec.begin(); it != _vec.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << elementCount << " elements with std::vector<int> : " << _vecTime << " us" << std::endl;
	std::cout << "Time to process a range of " << elementCount << " elements with std::deque<int> : " << _deqTime << " us" << std::endl;
	std::cout << std::endl;

	delete _input;
}

void	PMergeMe::vecSort(int elementCount) {
	int	straggler = 0;
	if (elementCount % 2)
		straggler = _input[elementCount - 1];
	_vec.reserve(elementCount);
	_vec = std::vector<int>(_input, _input + elementCount);

	std::vector< std::vector<int> >	pairs;
	for (int i = 0; i < elementCount; i += 2) {
		if (i + 1 < elementCount) {
			std::vector<int>	pair;
			pair.push_back(_input[i]);
			pair.push_back(_input[i + 1]);
			pairs.push_back(pair);
		}
	}
	for (std::vector< std::vector<int> >::iterator it = pairs.begin(); it != pairs.end(); ++it) {
		if ((*it)[0] > (*it)[1])
			std::swap((*it)[0], (*it)[1]);
	}

	mergePairs(pairs, 0, pairs.size() - 1);

	std::vector<int> sortedVec;
	insert(pairs, sortedVec);

	if (straggler) {
		std::vector<int>::iterator it = std::lower_bound(sortedVec.begin(), sortedVec.end(), straggler);
		sortedVec.insert(it, straggler);
	}

	_vec = sortedVec;
}

void	PMergeMe::deqSort(int elementCount) {
	int	straggler = 0;
	if (elementCount % 2)
		straggler = _input[elementCount - 1];
	_deq = std::deque<int>(_input, _input + elementCount);

	std::deque< std::deque<int> >	pairs;
	for (int i = 0; i < elementCount; i += 2) {
		if (i + 1 < elementCount) {
			std::deque<int>	pair;
			pair.push_back(_input[i]);
			pair.push_back(_input[i + 1]);
			pairs.push_back(pair);
		}
	}
	for (std::deque< std::deque<int> >::iterator it = pairs.begin(); it != pairs.end(); ++it) {
		if ((*it)[0] > (*it)[1])
			std::swap((*it)[0], (*it)[1]);
	}

	mergePairs(pairs, 0, pairs.size() - 1);

	std::deque<int> sortedDeq;
	insert(pairs, sortedDeq);

	if (straggler) {
		std::deque<int>::iterator it = std::lower_bound(sortedDeq.begin(), sortedDeq.end(), straggler);
		sortedDeq.insert(it, straggler);
	}

	_deq = sortedDeq;
}

template<typename Pairs>
void PMergeMe::mergePairs(Pairs& pairs, int left, int right) {
	if (left >= right) return;

	int mid = left + (right - left) / 2;
	mergePairs(pairs, left, mid);
	mergePairs(pairs, mid + 1, right);
	merge(pairs, left, mid, right);
}

template<typename Pairs>
void PMergeMe::merge(Pairs& pairs, int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;

	Pairs L(n1);
	Pairs R(n2);

	for (int i = 0; i < n1; ++i)
		L[i] = pairs[left + i];
	for (int i = 0; i < n2; ++i)
		R[i] = pairs[mid + 1 + i];

	int i = 0, j = 0, k = left;
	while (i < n1 && j < n2) {
		if (L[i][0] <= R[j][0]) {
			pairs[k] = L[i];
			i++;
		} else {
			pairs[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		pairs[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		pairs[k] = R[j];
		j++;
		k++;
	}
}

template<typename Container, typename Pairs>
void PMergeMe::insert(const Pairs& pairs, Container& sortedVec) {
	for (typename Pairs::const_iterator it = pairs.begin(); it != pairs.end(); ++it) {
		sortedVec.push_back((*it)[0]);
	}

	for (typename Pairs::const_iterator it = pairs.begin(); it != pairs.end(); ++it) {
		if ((*it).size() > 1) {
			typename Container::iterator insertIt = std::lower_bound(sortedVec.begin(), sortedVec.end(), (*it)[1]);
			sortedVec.insert(insertIt, (*it)[1]);
		}
	}
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
