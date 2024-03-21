#include "BitcoinExchange.hpp"
#include <cstdlib>
#include <sstream>

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
		return BAD_INPUT;

	std::string	date = line.substr(0, pipePos - 1);
	std::string	priceString = line.substr(pipePos + 1);

	if (!isValidDate(date) || !isValidFloat(priceString))
		return BAD_INPUT;

	float	price = atof(priceString.c_str());
	if (price < 0)
		return TOO_SMALL;
	if (price > 1000)
		return TOO_LARGE;

	_database.insert(std::make_pair(date, price));
	return OK;
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
	if (dateString.length() != 10 || charCount(dateString, '-') != 2)
		return false;

	std::istringstream iss(dateString);
	int year, month, day;
	char dash1, dash2;
	iss >> year >> dash1 >> month >> dash2 >> day;

	if (iss.fail() || dash1 != '-' || dash2 != '-')
		return false;

	if (year < 0 || month < 1 || month > 12 || day < 1)
		return false;

	int daysInMonth = 31;
	if (month == 4 || month == 6 || month == 9 || month == 11)
		daysInMonth = 30;
	else if (month == 2) {
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			daysInMonth = 29;
		else
			daysInMonth = 28;
	}

	if (day > daysInMonth)
		return false;
	return true;
}

bool	isValidFloat(const std::string& floatString) {
	if (floatString.empty())
		return false;
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
