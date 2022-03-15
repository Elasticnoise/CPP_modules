#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
public:

	PhoneBook();
	~PhoneBook();

	void    addNewContact();
	void    displayContactsList();

private:

	Contact     book[8];
	int         cid;
	int         counter;

};

#endif