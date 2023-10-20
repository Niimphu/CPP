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

    void    setFirstName(std::string);
    void    setLastName(std::string);
    void    setPhoneNumber(std::string);
    void    setDarkestSecret(std::string);

    bool    isValidPhoneNumber();

private:
	std::string	_firstName;
	std::string	_lastName;
    std::string	_phoneNumber;
	std::string	_darkestSecret;
};

Contact	newContact();

#endif