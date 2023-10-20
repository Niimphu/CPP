#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	_i = 0;
}

void	PhoneBook::addContact() {
	Contact	newContact;

	_contacts[_i] = newContact;
	incrementIndex();
	std::cout << "New contact " << Contact.getFirstName() << " " << Contact.getLastName() << " added to phonebook" << std::endl;
}

int	PhoneBook::getIndex() {
	return _i;
}

int	PhoneBook::incrementIndex() {
	if (_i > 7)
		_i = 0;
	else
		_i++;
}
