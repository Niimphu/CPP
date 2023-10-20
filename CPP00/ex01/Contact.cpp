#include "Contact.hpp"

bool	isValidPhoneNumber(const std::string& number);

Contact::Contact() : _firstName(""), _lastName(""), _phoneNumber(""), _darkestSecret("") {}

bool	Contact::isValidPhoneNumber() {
	if (_phoneNumber.empty())
		return false;
	for (std::string::const_iterator i = _phoneNumber.begin(); i != _phoneNumber.end(); ++i) {
		if (!std::isdigit(*i) && !std::isspace(*i)) {
			return false;
		}
	}
	return true;
}

std::string	Contact::getFirstName() {
	return _firstName;
};

std::string	Contact::getLastName() {
	return _lastName;
};

std::string	Contact::getPhoneNumber() {
	return _phoneNumber;
};

std::string	Contact::getDarkestSecret() {
	return _darkestSecret;
};

void	Contact::setFirstName(std::string newFirstName) {
	_firstName = newFirstName;
};

void	Contact::setLastName(std::string newLastName) {
	_lastName = newLastName;
};

void	Contact::setPhoneNumber(std::string newPhoneNumber) {
	_phoneNumber = newPhoneNumber;
};

void	Contact::setDarkestSecret(std::string newDarkestSecret) {
	_darkestSecret = newDarkestSecret;
};
