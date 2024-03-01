#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::cerr;

int	main( void ) {
	try {
		Bureaucrat Fred("Fred", 0);
		cout << Fred << endl;
	}
	catch ( std::exception& e ) {
		cerr << e.what() << endl;
	}

	try {
		Bureaucrat Dave("Dave", 160);
		cout << Dave << endl;
	}
	catch ( std::exception& e ) {
		cerr << e.what() << endl;
	}

	try {
		Bureaucrat Ben("Ben", 14);
		cout << Ben << endl;
	}
	catch ( std::exception& e ) {
		cerr << e.what() << endl;
	}

	try {
		Bureaucrat George("George", 2);
		George.incrementGrade();
		cout << George << endl;
		George.incrementGrade();
		cout << George << endl;
	}
	catch ( std::exception& e ) {
		cerr << e.what() << endl;
	}

	try {
		Bureaucrat Dan("Dan", 68);
		Dan.decrementGrade();
		cout << Dan << endl;
		Dan.decrementGrade();
		cout << Dan << endl;
	}
	catch ( std::exception& e ) {
		cerr << e.what() << endl;
	}
}
