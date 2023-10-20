#include "PhoneBook.hpp"

int	main() {
	std::cout << "Welcome to your Awesome Crappy Phonebook" << std::endl \
		<< "Please enter: ADD, SEARCH, or EXIT" << std::endl;

	std::string	userInput = "";
	PhoneBook	phoneBook;
	while (userInput.compare("EXIT")) {
		std::cout << "> " << std::flush;
		if (!std::getline(std::cin, userInput))
			break ;

		if (userInput.empty())
			continue ;
		if (!userInput.compare("ADD"))
			phoneBook.addContact();
		else if (!userInput.compare("SEARCH"))
			phoneBook.searchContacts();
		else if (userInput.compare("EXIT"))
			std::cout << "Invalid input. Please enter ADD, SEARCH, or EXIT." << std::endl;
	}
	return 0;
}

std::string	getInput(const std::string& fieldName) {
	std::string input = "";
	while (input.empty()) {
		std::cout << fieldName << ": " << std::flush;
		std::getline(std::cin, input);
	}
	return input;
}

std::string	truncateString(const std::string& inputString) {
	if (inputString.length() > 10)
		return (inputString.substr(0,9) + '.');
	return inputString;
}
