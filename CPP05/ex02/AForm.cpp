#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm( void ): _name( "Default" ), _gradeToSign( 150 ), _gradeToExecute( 150 ) {}

AForm::AForm( const std::string& name , const int gradeToSign, const int gradeToExecute): _name( name ), _isSigned( false ), _gradeToSign( gradeToSign ), _gradeToExecute( gradeToExecute ) {
	if ( _gradeToSign < 1 || _gradeToExecute < 1 )
		throw AForm::GradeTooHighException();
	if ( _gradeToSign > 150 || _gradeToExecute > 150 )
		throw AForm::GradeTooLowException();
}

AForm::AForm ( AForm& original ): _name( original._name + " copy" ), _isSigned( false ), _gradeToSign( original._gradeToSign ), _gradeToExecute( original._gradeToExecute ) {
	if ( _gradeToSign < 1 || _gradeToExecute < 1 )
		throw AForm::GradeTooHighException();
	if ( _gradeToSign > 150 || _gradeToExecute > 150 )
		throw AForm::GradeTooLowException();
}

AForm::~AForm( void ) {}

AForm&	AForm::operator=( AForm& other ) {
	if ( this != &other ) {}
	return *this;
}

std::string	AForm::getName( void ) const {
	return _name;
}

bool		AForm::getIsSigned( void ) const {
	return _isSigned;
}

int			AForm::getGradeToSign( void ) const {
	return _gradeToSign;
}

int			AForm::getGradeToExecute( void ) const {
	return _gradeToExecute;
}

void	AForm::beSigned( const Bureaucrat& bureaucrat ) {
	if ( bureaucrat.getGrade() > _gradeToSign ) {
		throw AForm::GradeTooLowException();
	}
	_isSigned = true;
}

void	AForm::checkBureaucratGradeForExecution( const Bureaucrat& bureaucrat ) const {
	if ( bureaucrat.getGrade() > _gradeToExecute ) {
		throw AForm::GradeTooLowException();
	}
}

std::ostream&	operator<<( std::ostream& os, const AForm& form ) {
	os << form.getName() << ", grade to sign: " << form.getGradeToSign() << ", grade to execute: " << form.getGradeToExecute();
	return os;
}
