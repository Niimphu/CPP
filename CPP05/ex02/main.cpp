#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

using std::cout;
using std::endl;
using std::cerr;

int	main( void ) {
	try {
		Bureaucrat Daisy("Daisy", 20);
		cout << Daisy << endl;
		ShrubberyCreationForm test = ShrubberyCreationForm();
		Daisy.signForm( test );
		Daisy.executeForm( test );

		RobotomyRequestForm	test2 = RobotomyRequestForm( "Tony" );
		Daisy.signForm( test2 );
		Daisy.executeForm( test2 );

	}
	catch ( std::exception& e ) {
		cerr << e.what() << endl;
	}
}
