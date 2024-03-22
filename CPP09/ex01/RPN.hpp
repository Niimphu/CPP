#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>

class	RPN {
public:
	RPN(void);
	RPN(const RPN&);
	~RPN(void);

	RPN&	operator=(const RPN&);

	void	setOperands(const std::map<int>&);
	std::map<int>	getOperands(void);

	void	setOperators(const std::map<int>&);
	std::map<int>	getOperators(void);


private:
	std::map<int>	_operands;
	std::map<int>	_operators;

};

#endif
