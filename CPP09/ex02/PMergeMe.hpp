#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
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

	void	sort(int, char**);
	int		parse(char**);


private:
	int*				_input;
	std::vector<int>	_vec;
	std::deque<int>		_deq;
	float				_vecTime;
	float				_deqTime;

};

#endif
