#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	_i = 0;
}

void	PhoneBook::addContact() {
	Contact	newContact;
	std::string userInput;

	std::cout << "Please enter the following contact details: " << std::endl;
	while (newContact.getFirstName().empty()) {
		std::cout << "First name: " << std::flush;
		std::getline(std::cin, userInput);
		newContact.setFirstName(userInput);
	}
	userInput.clear();
	while (newContact.getLastName().empty()) {
		std::cout << "Last name: " << std::flush;
		std::getline(std::cin, userInput);
		newContact.setLastName(userInput);
	}
	userInput.clear();
	while (newContact.getPhoneNumber().empty() || !newContact.isValidPhoneNumber()) {
		std::cout << "Phone number: " << std::flush;
		std::getline(std::cin, userInput);
		newContact.setPhoneNumber(userInput);
	}
	userInput.clear();
	while (newContact.getDarkestSecret().empty()) {
		std::cout << "Darkest secret: " << std::flush;
		std::getline(std::cin, userInput);
		newContact.setDarkestSecret(userInput);
	}

	_contacts[_i] = newContact;
	incrementIndex();
	std::cout << "New contact " << newContact.getFirstName() << " " << newContact.getLastName() << " added to phonebook" << std::endl;
}

int	PhoneBook::getIndex() {
	return _i;
}

void	PhoneBook::incrementIndex() {
	if (_i > 7)
		_i = 0;
	else
		_i++;
}
