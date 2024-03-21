#include "BitcoinExchange.hpp"

int	main(void) {
	BitcoinExchange	btc;
	std::map<std::string, float>	database = btc.getDatabase();
	std::map<std::string, float>::const_iterator it = database.begin();
	std::advance(it, 200);
	std::cout << it->second << std::endl;
	return 0;
}
