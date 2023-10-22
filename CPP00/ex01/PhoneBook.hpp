#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iomanip>
# include <iostream>
# include <string>
# include <cstdlib>
# include <cstdio>

std::string	truncateString( const std::string& );

class	PhoneBook {
public:
	PhoneBook( void );

	void	addContact( void );
	void	searchContacts( void );
	void	printPhoneBook( void );
	void	printContact( const int );

	void	incrementIndex( void );
	void	incrementCount( void );

	bool	isValidIndex( const std::string& );

private:
	Contact	_contacts[8];
	int		_i;
	int		_count;
};

#endif
