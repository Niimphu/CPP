#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Form {
public:
	Form( void );
	Form ( Form& );
	~Form( void );

	Form	&operator=( Form& );

	void	beSigned( const Bureaucrat& );

	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw() {
			return "Grade too high.";
		}
	};

	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw() {
			return "Grade too low.";
		}
	};


private:
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;


};

std::ostream&	operator<<( std::ostream&, const Form& );

#endif
