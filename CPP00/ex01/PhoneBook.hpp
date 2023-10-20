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

	void	incrementIndex();
	void	incrementCount();

private:
	Contact	_contacts[8];
	int		_i;
	int		_count;
};

#endif