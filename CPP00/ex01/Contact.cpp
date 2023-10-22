#include "Contact.hpp"

Contact::Contact() : _firstName(""), _lastName(""), _nickname(""), _phoneNumber(""), _darkestSecret("") {}

bool	Contact::isValidPhoneNumber( void ) {
	if (_phoneNumber.empty())
		return false;
	bool	containsDigit = false;
	for (size_t i = 0; i < _phoneNumber.length(); ++i) {
		if (!std::isdigit(_phoneNumber[i]) && !std::isspace(_phoneNumber[i]))
			return false;
		if (std::isdigit(_phoneNumber[i]))
			containsDigit = true;
	}
	if (containsDigit)
		return true;
	return false;
}

std::string	Contact::getFirstName( void ) {
	return _firstName;
}

std::string	Contact::getLastName( void ) {
	return _lastName;
}

std::string	Contact::getNickname( void ) {
	return _nickname;
}

std::string	Contact::getPhoneNumber( void ) {
	return _phoneNumber;
}

std::string	Contact::getDarkestSecret( void ) {
	return _darkestSecret;
}

void	Contact::setFirstName( const std::string& newFirstName ) {
	_firstName = newFirstName;
}

void	Contact::setLastName( const std::string& newLastName ) {
	_lastName = newLastName;
}

void	Contact::setNickname( const std::string& newNickname ) {
	_nickname = newNickname;
}

void	Contact::setPhoneNumber( const std::string& newPhoneNumber ) {
	_phoneNumber = newPhoneNumber;
}

void	Contact::setDarkestSecret( const std::string& newDarkestSecret ) {
	_darkestSecret = newDarkestSecret;
}
