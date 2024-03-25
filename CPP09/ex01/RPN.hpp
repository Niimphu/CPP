#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>

const std::string	DIGITS = "0123456789";
const std::string	OPERATORS = "+-*/";

class	RPN {
public:
	RPN(void);
	~RPN(void);

	void	calculate(const std::string&);

	bool	isValid(const std::string&);
	int		doTheMaths(const std::string&);

private:
	std::stack<int>	_operands;
	std::stack<int>	_operators;

	RPN(const RPN&);
	RPN&	operator=(const RPN&);

};

#endif
