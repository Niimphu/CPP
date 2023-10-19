#include "PhoneBook.hpp"
#include "Contact.hpp"

int getInput();

int	main() {
	std::cout << "Welcome to your Awesome Crappy Phonebook" << std::endl \
		<< "Please enter: ADD, SEARCH, or EXIT" << std::endl;

	std::string	userInput = "";
	while (userInput.compare("EXIT")) {
		std::cout << "> " << std::flush;
		if (!std::getline(std::cin, userInput))
			break ;

		if (userInput.empty())
			continue ;
		if (!userInput.compare("ADD"))
			newContact();
		else if (!userInput.compare("SEARCH"))
			std::cout << "searching" << std::endl;
		else if (userInput.compare("EXIT"))
			std::cout << "Invalid input. Please enter ADD, SEARCH, or EXIT." << std::endl;
	}
	return 0;
}
