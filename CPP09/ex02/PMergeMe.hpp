#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>

class	PMergeMe {
public:
	PMergeMe(void);
	PMergeMe(const PMergeMe&);
	~PMergeMe(void);

	PMergeMe&	operator=(const PMergeMe&);


private:
	std::unordered_set<int>	_rawValues;
	std::vector<int>	_sortedVector;
	std::deque<int>	_sortedDeque;
	float	_vecTime;
	float	_deqTime;

};

#endif
