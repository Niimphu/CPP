#include "PhoneBook.hpp"

bool	isEmpty( const std::string& input );

int	main( void ) {
	std::cout << "Welcome to your Silly Little Phonebook" << std::endl \
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

std::string	getInput( const std::string& fieldName ) {
	std::string input = "";
	while (isEmpty(input)) {
		std::cout << fieldName << ": " << std::flush;
		std::getline(std::cin, input);
	}
	return input;
}

std::string	truncateString( const std::string& inputString ) {
	if (inputString.length() > 10)
		return (inputString.substr(0,9) + '.');
	return inputString;
}

bool	isEmpty( const std::string& input ) {
	if (input.empty())
		return true;
	for (int i = 0; input[i]; ++i) {
		if (!std::isspace(input[i]))
			return false;
	}
	return true;
}
