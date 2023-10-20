#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	_i = 0;
}

void	PhoneBook::addContact() {
	Contact	newContact;

	std::cout << "Please enter the following contact details: " << std::endl;
	newContact.setFirstName(getInput("First name"));
	newContact.setLastName(getInput("Last name"));
	while (!newContact.isValidPhoneNumber())
		newContact.setPhoneNumber(getInput("Phone number"));
	newContact.setDarkestSecret(getInput("Darkest secret"));

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
