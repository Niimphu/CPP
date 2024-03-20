#include "BitcoinExchange.hpp"
#include <cstdlib>

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& original) {
	for (std::map<std::string, float>::const_iterator it = original._database.begin(); it != original._database.end(); ++it) {
		std::string	key = it->first;
		float		value = it->second;
		_database.insert(std::make_pair(key, value));
	}
}

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this != &other) {}
	return *this;
}

int	BitcoinExchange::parseLine(const std::string& line) {
	size_t	pipePos = line.find('|');
	if (pipePos == std::string::npos || line[pipePos - 1] != ' ' || line[pipePos + 1] != ' ')
		return -1;

	std::string	date = line.substr(0, pipePos - 1);
	std::string	priceString = line.substr(pipePos + 1);

	if (date.empty() || priceString.empty())
		return -1;

	_database.insert(std::make_pair(date, atof(priceString.c_str())));
	return 0;
}

std::map<std::string, float>	parseDatabase(const std::string& fileName) {
	std::map<std::string, float>	database;
	(void)fileName;
	return database;
}

void	BitcoinExchange::setDatabase(const std::string& fileName) {
	(void)fileName;
}

bool	isValidDate(const std::string& dateString) {
	size_t	dashPos = dateString.find('-');
	if (dashPos == std::string::npos)
		return false;

	return true;
}

bool	isValidFloat(const std::string& floatString) {
	size_t	pos = floatString.find_first_not_of(DIGITS + std::string("."));
	if (pos != std::string::npos)
		return false;

	int	decimalPointCount = charCount(floatString, '.');
	if (decimalPointCount > 1)
		return false;
	return true;
}

size_t	charCount(const std::string& input, char c) {
	size_t	count = 0;

	for (size_t it = 0; it < input.length(); it++) {
		if (input[it] == c)
			count++;
	}
	return count;
}
