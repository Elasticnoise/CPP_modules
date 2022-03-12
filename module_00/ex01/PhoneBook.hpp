#ifndef CPP_MODULES_PHONEBOOK_HPP
# define CPP_MODULES_PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	Contact book[8];
	int		count;
public:
	PhoneBook();
	~PhoneBook();
	void addNewContact();
	void displayContactsList();
};

#endif
