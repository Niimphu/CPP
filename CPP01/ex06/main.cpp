#include "Harl.hpp"

int	main( int argc, char **argv ) {
	if (argc != 2) {
		std::cerr << "Usage: ./harlFilter <log level>" << std::endl;
		return (1);
	}

	std::string	levelString;
	if (!argv[1])
		levelString = "";
	else
		levelString = argv[1];

	Harl harl;
	harl.complain(levelString);

	return 0;
}
