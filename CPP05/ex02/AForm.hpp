#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include <exception>

class	Bureaucrat;

class	AForm {
public:
	AForm( AForm& );
	AForm( const std::string&, const int, const int );
	~AForm( void );

	std::string	getName( void ) const;
	bool		getIsSigned( void ) const;
	int			getGradeToSign( void ) const;
	int			getGradeToExecute( void ) const;

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

	AForm( void );
	AForm	&operator=( AForm& );


};

std::ostream&	operator<<( std::ostream&, const AForm& );

#endif
