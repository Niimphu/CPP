#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <unordered_set>
# include <vector>
# include <deque>

# define DIGITS "0123456789"

bool	isValidUInt(const std::string&);

class	PMergeMe {
public:
	PMergeMe(void);
	PMergeMe(const PMergeMe&);
	~PMergeMe(void);

	PMergeMe&	operator=(const PMergeMe&);

	void	parse(char**);


private:
	std::unordered_set<int>	_rawValues;
	std::vector<int>	_sortedVector;
	std::deque<int>	_sortedDeque;
	float	_vecTime;
	float	_deqTime;

};

#endif
