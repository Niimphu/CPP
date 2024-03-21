#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>

# define DIGITS "0123456789"
# define OK 0
# define OPEN 1
# define BAD_INPUT 2
# define TOO_SMALL 3
# define TOO_LARGE 4

size_t	charCount(const std::string&, char);
bool	isValidFloat(const std::string&);
bool	isValidDate(const std::string&);
void	error(int, const std::string& = "");

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
