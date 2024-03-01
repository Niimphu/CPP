#include "Bureaucrat.hpp"
#include "Form.hpp"

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

std::ostream&	operator<<( std::ostream& os, const Bureaucrat& bureaucrat ) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
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

void	Bureaucrat::signForm( Form& form ) const {
	try {
		form.beSigned( *this );
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch ( std::exception& e ) {
		std::cerr << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

