#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class	PhoneBook {
public:
	PhoneBook();

	void	addContact();

	int		getIndex();
	void	incrementIndex();

private:
	Contact	_contacts[8];
	int		_i;
};

#endif