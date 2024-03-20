#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class	Span {
public:
	Span(unsigned int);
	Span(const Span&);
	~Span(void);

	Span&	operator=(const Span&);

	void	addNumber(int);
	void	addRange(int, int);
	int		shortestSpan(void);
	int		longestSpan(void);

	template<typename T>
	void	addNumbers(T& container) {
		_numbers.insert(_numbers.end(), container.begin(), container.end());
		_sortedNumbers.insert(_numbers.end(), container.begin(), container.end());
	}

	class	spanFull: public std::exception {
	public:
		const char* what() const throw() {
			return "Max number of elements reached";
		}
	};
	class	tooFewValues: public std::exception {
	public:
		const char *what() const throw() {
			return "Too few numbers stored";

		}
	};


private:
	unsigned int		_N;
	std::vector<int>	_numbers;
	std::vector<int>	_sortedNumbers;

};

#endif
