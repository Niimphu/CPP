#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>

# define DIGITS "0123456789"
# define OK 0
# define BAD_INPUT 1
# define TOO_SMALL 2
# define TOO_LARGE 3

size_t	charCount(const std::string&, char);
bool	isValidFloat(const std::string&);
bool	isValidDate(const std::string&);

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
