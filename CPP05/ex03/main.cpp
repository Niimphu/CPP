#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

using std::cout;
using std::endl;
using std::cerr;

int	main( void ) {
	Bureaucrat reg("Reginald Harrington", 3);
	cout << reg << endl;
	Intern tim = Intern();
	cout << endl;

	try {
		AForm* form = tim.makeForm( "SHRUBBERY CREATION", "Harrington_Manor" );
		cout << *form << endl;
		try {
			reg.signForm( *form );
			reg.executeForm( *form );
		}
		catch ( std::exception& e ) {
			cerr << e.what() << endl;
		}
		delete form;
	}
	catch ( std::exception& e ) {
		cerr << e.what() << endl;
	}
	cout << endl;

	try {
		AForm* form = tim.makeForm( "Robotomy Request", "The new intern" );
		cout << *form << endl;
		try {
			reg.signForm( *form );
			reg.executeForm( *form );
		}
		catch ( std::exception& e ) {
			cerr << e.what() << endl;
		}
		delete form;
	}
	catch ( std::exception& e ) {
		cerr << e.what() << endl;
	}
	cout << endl;

	try {
		AForm* form = tim.makeForm( "Cheese Transmutation", "Pebble" );
		cout << *form << endl;
		delete form;
	}
	catch ( std::exception& e ) {
		cerr << "Intern could not create form: " << e.what() << endl;
	}
	cout << endl;

}
