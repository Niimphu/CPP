#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::complain( std::string level ) {
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	int	i;
	for (i = 0; levels[i].compare(level); ++i) {
		if (i >= 4)
			break ;
	}
	switch	(i){
		case	0:
			this->debug();
		case	1:
			this->info();
		case	2:
			this->warning();
		case	3:
			this->error();
			break ;
		default:
			std::cout << "[ *mumbles incoherently* ]" << std::endl << std::endl;
	}
}

void	Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love money" << std::endl << std::endl;
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I'm kinda broke rn" << std::endl << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "Give me a job or else. I know where you live..." << std::endl << std::endl;
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "*dies of poverty*" << std::endl << std::endl;
}
