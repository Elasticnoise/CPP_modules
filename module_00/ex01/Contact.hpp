
#ifndef CPP_MODULES_CONTACT_HPP
# define CPP_MODULES_CONTACT_HPP

#include <iostream>

class Contact
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact();
	~Contact();
	void SetFirstName(char *first_name);
	void SetLastName(char *last_name);
	void SetNickName(char *nickname);
	void SetPhoneNumber(char *phone_number);
	void SetDarkestSecret(char *darkest_secret);
};

#endif
