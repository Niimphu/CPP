#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>

class	BitcoinExchange {
public:
	BitcoinExchange(void);
	BitcoinExchange(const BitcoinExchange&);
	~BitcoinExchange(void);

	BitcoinExchange&	operator=(const BitcoinExchange&);

    std::map<std::string, float>	parseDatabase(const std::string&);
	void	setDatabase(const std::string&);


private:
	std::map<std::string,float>	_database;

	int	BitcoinExchange::parseLine(const std::string&);

};

#endif
