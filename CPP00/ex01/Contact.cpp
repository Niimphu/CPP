#include "Contact.hpp"

bool isValidPhoneNumber(const std::string& number);

Contact	newContact() {
	std::string	firstName = "";
	std::string	lastName = "";
	std::string	phoneNumber = "";
	std::string	darkestSecret = "";

	std::cout << "Please enter the following contact details: " << std::endl;
	while (firstName.empty()) {
		std::cout << "First name: " << std::flush;
		std::getline(std::cin, firstName);
	}
	while (lastName.empty()) {
		std::cout << "Last name: " << std::flush;
		std::getline(std::cin, lastName);
	}
	while (phoneNumber.empty() || !isValidPhoneNumber(phoneNumber)) {
		std::cout << "Phone number: " << std::flush;
		std::getline(std::cin, phoneNumber);
	}
	while (darkestSecret.empty()) {
		std::cout << "Darkest secret: " << std::flush;
		std::getline(std::cin, darkestSecret);
	}

	Contact	newContact = Contact(firstName, lastName, phoneNumber, darkestSecret);
	std::cout << "New contact " << firstName << " " << lastName << " added to phonebook" << std::endl;
	return (newContact);
}

bool isValidPhoneNumber(const std::string& number) {
	for (std::string::const_iterator it = number.begin(); it != number.end(); ++it) {
		if (!std::isdigit(*it) && !std::isspace(*it)) {
			return false;
		}
	}
	return true;
}
