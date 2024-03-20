#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& original) {}

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this != &other) {}
	return *this;
}

int	BitcoinExchange::parseLine(const std::string& line) {
	size_t	pipePos = line.find('|');
	if (pipePos == std::string::npos || line[pipePos - 1] != ' ' || line[pipePos + 1] != ' ')
		return -1;
	}

	std::string	date = line.substr(0, pipePos - 1);
	std::string	priceString = line.substr(pipePos + 1);

	if (date.empty() || priceString.empty())
		return -1;

	_database.insert(std::make_pair(date, std::stof(priceString)));
	return 0;
}

std::map<std::string, float>	parseDatabase(const std::string& fileName) {
	
}

void	BitcoinExchange::setDatabase(const std::string& fileName) {

}

void
