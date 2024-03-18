#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& original) {}

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this != &other) {}
	return *this;
}

void		BitcoinExchange::setDatabase(const std::map<std::string,float>& database) {
	_database = database;
}

std::map<std::string,float>	BitcoinExchange::getDatabase(void) {
	return _database;
}
