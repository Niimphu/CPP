#include "Contact.hpp"

bool isValidPhoneNumber(const std::string& number);

Contact::Contact() {
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
}
//
//void	Contact::newContact() {
//	std::cout << "Please enter the following contact details: " << std::endl;
//	while (firstName.empty()) {
//		std::cout << "First name: " << std::flush;
//		std::getline(std::cin, firstName);
//	}
//	while (lastName.empty()) {
//		std::cout << "Last name: " << std::flush;
//		std::getline(std::cin, lastName);
//	}
//	while (phoneNumber.empty() || !isValidPhoneNumber(phoneNumber)) {
//		std::cout << "Phone number: " << std::flush;
//		std::getline(std::cin, phoneNumber);
//	}
//	while (darkestSecret.empty()) {
//		std::cout << "Darkest secret: " << std::flush;
//		std::getline(std::cin, darkestSecret);
//	}
//}

bool isValidPhoneNumber(const std::string& number) {
	for (std::string::const_iterator i = number.begin(); i != number.end(); ++i) {
		if (!std::isdigit(*i) && !std::isspace(*i)) {
			return false;
		}
	}
	return true;
}
