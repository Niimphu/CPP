#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact {
public:
	Contact(const std::string& first, const std::string& last, const std::string& phone, const std::string& secret)
			: firstName(first), lastName(last), phoneNumber(phone), darkestSecret(secret) {
	}

	std::string getFirstName();
	std::string getLastName();
	std::string getPhoneNumber();
	std::string getDarkestSecret();

private:
	const std::string	firstName;
	const std::string	lastName;
	const std::string	phoneNumber;
	const std::string	darkestSecret;
};

Contact	newContact();

#endif