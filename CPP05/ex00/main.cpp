#include "Bureaucrat.hpp"

int	main( void ) {
	try {
		Bureaucrat* Fred = new Bureaucrat("Fred", 4);
		std::cout << Fred << std::endl;
		delete Fred;
	}
	catch ( std::exception& e ) {
		std::cout << "Oh no!" << std::endl;
	}
}
