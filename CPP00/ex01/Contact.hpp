#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact {
public:
	Contact();

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