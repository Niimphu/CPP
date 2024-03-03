#include "Bureaucrat.hpp"
#include "Form.hpp"

using std::cout;
using std::endl;
using std::cerr;

int	main( void ) {
	Bureaucrat	Daisy("Daisy", 130);
	cout << Daisy << endl;
	try {
		Form	test("Test", 0, 20);
	}
	catch ( std::exception& e ) {
		cerr << e.what() << endl;
	}
	try {
		Form	Taxes("Taxes", 142, 128);
		cout << Taxes << endl;
		Daisy.signForm( Taxes );
		Form	GovernmentSecrets("GovernmentSecrets", 7, 2);
		cout << GovernmentSecrets << endl;
		Daisy.signForm( GovernmentSecrets );
	}
	catch ( std::exception& e ) {
		cerr << e.what() << endl;
	}
}
