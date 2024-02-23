#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <string>

class Bureaucrat {
public:
	Bureaucrat( const std::string&, int );
	Bureaucrat( const Bureaucrat& );
	~Bureaucrat( void );

	Bureaucrat&		operator=( const Bureaucrat& );
	std::ostream&	operator<<( std::ostream& ) const;

	const std::string	getName( void ) const;
	int					getGrade( void ) const;

	void	incrementGrade( void );
	void	decrementGrade( void );

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
	Bureaucrat( void );
	const std::string	_name;
	int					_grade;
};

#endif
