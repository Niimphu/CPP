#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iomanip>

bool		isValidIndex(std::string);
std::string	truncateString(const std::string&);

class	PhoneBook {
public:
	PhoneBook();

	void	addContact();
	void	searchContacts();
	void	printPhoneBook();
	void	printContact(int);

	void	incrementIndex();
	void	incrementCount();

	bool	isValidIndex(std::string);

private:
	Contact	_contacts[8];
	int		_i;
	int		_count;
};

#endif