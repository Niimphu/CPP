#include "Harl.hpp"

int	main( void ) {
	Harl harl;

	harl.complain("INFO");
	std::cout << std::endl;

	harl.complain("INFO");
	std::cout << std::endl;

	harl.complain("DEBUG");
	std::cout << std::endl;

	harl.complain("INFO");
	std::cout << std::endl;

	harl.complain("ERROR");
	std::cout << std::endl;

	harl.complain("WARNING");
	std::cout << std::endl;

	harl.complain("WARNING");
	std::cout << std::endl;

	harl.complain("info");
	std::cout << std::endl;

	harl.complain("""");
	std::cout << std::endl;

	return 0;
}
