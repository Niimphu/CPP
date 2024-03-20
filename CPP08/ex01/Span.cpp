#include "Span.hpp"
#include <algorithm>
#include <numeric>

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span& original) : _N(original._N), _numbers(original._numbers) {}

Span::~Span(void) {}

Span&	Span::operator=(const Span& other) {
	if (this != &other) {
		_N = other._N;
		_numbers = other._numbers;
	}
	return *this;
}

void	Span::addNumber(int newNumber) {
	if (_numbers.size() >= _N)
		throw Span::spanFull();
	_numbers.push_back(newNumber);
	_sortedNumbers.push_back(newNumber);
}

void	Span::addNumbers(std::vector<int> newSet) {
	_numbers.insert(_numbers.end(), newSet.begin(), newSet.end());
}

int Span::shortestSpan() {
	if (_sortedNumbers.size() < 2)
		throw Span::tooFewValues();
	std::sort(_sortedNumbers.begin(), _sortedNumbers.end());

	std::vector<int>	differences(_sortedNumbers.size());
	std::adjacent_difference(_sortedNumbers.begin(), _sortedNumbers.end(), differences.begin());

	std::vector<int>::iterator	shortestSpan = std::min_element(differences.begin() + 1, differences.end());

	return *shortestSpan;
}

int	Span::longestSpan(void) {
	if (_sortedNumbers.size() < 2)
		throw Span::tooFewValues();
	std::sort(_sortedNumbers.begin(), _sortedNumbers.end());
	return _sortedNumbers.back() - _sortedNumbers.front();
}
