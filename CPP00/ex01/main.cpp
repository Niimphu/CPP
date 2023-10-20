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

bool	isValidIndex(std::string indexString) {
	if (indexString.empty())
		return false;
	for (size_t i = 0; i < indexString.length(); ++i) {
		if (!std::isdigit(indexString[i]))
			return false;
	}
	if (std::stoi(indexString) > 0 && std::stoi(indexString) <= 8)
		return true;
	return false;
}

std::string	truncateString(const std::string& inputString) {
	if (inputString.length() > 10)
		return (inputString.substr(0,9) + '.');
	return inputString;
}
