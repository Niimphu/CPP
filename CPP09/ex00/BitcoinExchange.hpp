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

	void	setDatabase(const std::map<std::string,float>&);
	std::map<std::string,float>	getDatabase(void);


private:
	std::map<std::string,float>	_database;

};

#endif
