#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ): _name( "Default" ), _gradeToSign( 150 ), _gradeToExecute( 150 ) {}

Form::Form( const std::string& name , const int gradeToSign, const int gradeToExecute): _name( name ), _isSigned( false ), _gradeToSign( gradeToSign ), _gradeToExecute( gradeToExecute ) {
	if ( _gradeToSign < 1 || _gradeToExecute < 1 )
		throw Form::GradeTooHighException();
	if ( _gradeToSign > 150 || _gradeToExecute > 150 )
		throw Form::GradeTooLowException();
}

Form::Form ( Form& original ): _name( original._name + " copy" ), _isSigned( false ), _gradeToSign( original._gradeToSign ), _gradeToExecute( original._gradeToExecute ) {
	if ( _gradeToSign < 1 || _gradeToExecute < 1 )
		throw Form::GradeTooHighException();
	if ( _gradeToSign > 150 || _gradeToExecute > 150 )
		throw Form::GradeTooLowException();
}

Form::~Form( void ) {}

Form&	Form::operator=( Form& other ) {
	if ( this != &other ) {}
	return *this;
}

std::string	Form::getName( void ) const {
	return _name;
}

bool		Form::getIsSigned( void ) const {
	return _isSigned;
}

int			Form::getGradeToSign( void ) const {
	return _gradeToSign;
}

int			Form::getGradeToExecute( void ) const {
	return _gradeToExecute;
}

void	Form::beSigned( const Bureaucrat& bureaucrat ) {
	if ( bureaucrat.getGrade() > _gradeToSign ) {
		throw Form::GradeTooLowException();
	}
	_isSigned = true;
}

std::ostream&	operator<<( std::ostream& os, const Form& form ) {
	os << form.getName() << ( form.getIsSigned() ? ", signed" : ", not yet signed" ) << ", grade to sign: " << form.getGradeToSign() << ", grade to execute: " << form.getGradeToExecute();
	return os;
}
