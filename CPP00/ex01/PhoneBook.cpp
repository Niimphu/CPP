#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _i(0), _count(0) {
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
	incrementCount();
	std::cout << "New contact " << newContact.getFirstName() << " " << newContact.getLastName() << " added to phonebook" << std::endl;
}

void	PhoneBook::searchContacts() {
	if (!_count) {
		std::cout << "Please ADD a contact before SEARCHing" << std::endl;
		return ;
	}
	printPhoneBook();

	std::string	indexInput = getInput("Enter the index of the contact you would like to see");
	while (!isValidIndex(indexInput))
		indexInput = getInput("Please enter a number between 1 and " + std::to_string(_count));
	printContact(stoi(indexInput) - 1);
}

void	PhoneBook::printPhoneBook() {
	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << "|Index     |First name|Last name |Number    |Secret    |" << std::endl;
	std::cout << "--------------------------------------------------------" << std::endl;
	for (int i = 0; i < _count; ++i) {
		std::cout << "|" << std::setw(10) << std::right << i + 1 << std::flush;
		std::cout << "|" << std::setw(10) << std::right << truncateString(_contacts[i].getFirstName()) << std::flush;
		std::cout << "|" << std::setw(10) << std::right << truncateString(_contacts[i].getLastName()) << std::flush;
		std::cout << "|" << std::setw(10) << std::right << truncateString(_contacts[i].getPhoneNumber()) << std::flush;
		std::cout << "|" << std::setw(10) << std::right << truncateString(_contacts[i].getDarkestSecret()) << std::flush;
		std::cout << "|" << std::endl;
	}
	std::cout << "--------------------------------------------------------" << std::endl;
}

bool	PhoneBook::isValidIndex(const std::string& indexString) {
	if (indexString.empty())
		return false;
	for (size_t i = 0; i < indexString.length(); ++i) {
		if (!std::isdigit(indexString[i]))
			return false;
	}
	if (std::stoi(indexString) > 0 && std::stoi(indexString) <= _count)
		return true;
	return false;
}

void PhoneBook::printContact(const int i) {
	std::cout << "First name:     " << _contacts[i].getFirstName() << std::endl;
	std::cout << "Last name:      " << _contacts[i].getLastName() << std::endl;
	std::cout << "Phone number:   " << _contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << _contacts[i].getDarkestSecret() << std::endl;
}

void	PhoneBook::incrementIndex() {
	if (_i < 7)
		_i++;
	else
		_i = 0;
}

void	PhoneBook::incrementCount() {
	if (_count < 8)
		_count++;
}
