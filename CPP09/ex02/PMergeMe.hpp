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
	void	vecSort(int);
	void	deqSort(int);

	template<typename Pairs>
	void	mergePairs(Pairs&, int, int);
	template<typename Pairs>
	void	merge(Pairs&, int, int, int);
	template<typename Container, typename Pairs>
	void	insert(const Pairs& pairs, Container& sortedVec);

private:
	int*				_input;
	std::vector<int>	_vec;
	std::deque<int>		_deq;
	double				_vecTime;
	double				_deqTime;

};

#endif
