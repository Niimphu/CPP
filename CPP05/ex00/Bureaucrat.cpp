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
		_grade = other._grade;
	}
	return *this;
}

Bureaucrat::Bureaucrat( void ) {}

Bureaucrat::~Bureaucrat( void ) {}


std::ostream&	Bureaucrat::operator<<( std::ostream& os ) const {
	os << _name << ", bureaucrat grade " << _grade;
	return os;
}

const std::string	Bureaucrat::getName( void ) const {
	return _name;
}

int					Bureaucrat::getGrade( void ) const {
	return _grade;
}

void	Bureaucrat::incrementGrade( void ) {
	if ( _grade <= 1 )
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade( void ) {
	if ( _grade >= 150 )
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}
