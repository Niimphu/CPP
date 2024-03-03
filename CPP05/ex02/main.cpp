#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

using std::cout;
using std::endl;
using std::cerr;

int	main( void ) {
	try {
		Bureaucrat Daisy("Daisy", 142);
		cout << Daisy << endl;
		ShrubberyCreationForm test = ShrubberyCreationForm();
		Daisy.signForm( test );
		Daisy.executeForm( test );
	}
	catch ( std::exception& e ) {
		cerr << e.what() << endl;
	}
}
