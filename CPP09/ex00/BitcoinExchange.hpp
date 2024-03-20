#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>

# define DIGITS "0123456789"

size_t	charCount(const std::string&, char);

class	BitcoinExchange {
public:
	BitcoinExchange(void);
	BitcoinExchange(const BitcoinExchange&);
	~BitcoinExchange(void);

	BitcoinExchange&	operator=(const BitcoinExchange&);

    std::map<std::string, float>	parseDatabase(const std::string&);
	void	setDatabase(const std::string&);


private:
	std::map<std::string, float>	_database;

	int	parseLine(const std::string&);

};

#endif
