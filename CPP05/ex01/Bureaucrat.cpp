#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string& name, int grade ) : _name( name ) {
	if ( grade < 1 )
		throw Bureaucrat::GradeTooHighException();
	if ( grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& original ) : _name( original._name + " Copy" ), _grade( original._grade ) {}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& other ) {
	if ( this != &other ) {
		if ( other._grade < 1 )
			throw Bureaucrat::GradeTooHighException();
		if ( other._grade > 150 )
			throw Bureaucrat::GradeTooLowException();
		_grade = other._grade;
	}
	return *this;
}

Bureaucrat::Bureaucrat( void ) : _name( "Default" ) {}

Bureaucrat::~Bureaucrat( void ) {}

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& b ) {
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}

const std::string	Bureaucrat::getName( void ) const {
	return _name;
}

int					Bureaucrat::getGrade( void ) const {
	return _grade;
}

void	Bureaucrat::incrementGrade( void ) {
	_grade--;
	if ( _grade < 1 )
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade( void ) {
	_grade++;
	if ( _grade > 150 )
		throw Bureaucrat::GradeTooLowException();
}
