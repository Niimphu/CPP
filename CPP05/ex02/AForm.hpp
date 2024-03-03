#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include <exception>

class	Bureaucrat;

class	AForm {
public:
	AForm( AForm& );
	AForm( const std::string&, const std::string&, const int, const int );
	virtual ~AForm( void );

	std::string	getName( void ) const;
	std::string	getTarget( void ) const;
	bool		getIsSigned( void ) const;
	int			getGradeToSign( void ) const;
	int			getGradeToExecute( void ) const;

	void			beSigned( const Bureaucrat& );
	void			checkBureaucratGradeForExecution( const Bureaucrat& ) const;
	virtual void	execute( Bureaucrat const& ) const = 0;

	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw() {
			return "Grade too high";
		}
	};

	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw() {
			return "Grade too low";
		}
	};


private:
	const std::string	_name;
	const std::string	_target;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;

	AForm( void );
	AForm	&operator=( AForm& );


};

std::ostream&	operator<<( std::ostream&, const AForm& );

#endif
