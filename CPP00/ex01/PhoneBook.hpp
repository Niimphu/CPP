#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iomanip>
# include <iostream>
# include <string>
# include <cstdlib>
# include <cstdio>

std::string	truncateString(const std::string&);

class	PhoneBook {
public:
	PhoneBook();

	void	addContact();
	void	searchContacts();
	void	printPhoneBook();
	void	printContact(const int);

	void	incrementIndex();
	void	incrementCount();

	bool	isValidIndex(const std::string&);

private:
	Contact	_contacts[8];
	int		_i;
	int		_count;
};

#endif