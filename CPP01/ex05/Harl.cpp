#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::complain( std::string level ) {
	void (Harl::*funcPointer[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	int	i;
	for (i = 0; levels[i].compare(level); ++i) {
		if (i >= 4) {
			std::cerr << "Complaint not found :[ please type DEBUG, INFO, WARNING or ERROR" << std::endl;
			return ;
		}
	}
	(this->*funcPointer[i])();
}

void	Harl::debug( void ) {
	std::cout << "I love money" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "I'm kinda broke rn" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "Give me a job or else. I know where you live..." << std::endl;
}

void	Harl::error( void ) {
	std::cout << "*dies of poverty*" << std::endl;
}


