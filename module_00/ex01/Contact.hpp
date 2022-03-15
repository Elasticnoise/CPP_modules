#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
public:

	int     index;

	Contact();
	~Contact();

	void    newContact(int cid);
	void    displayContact();
	void    displayDetailed();

private:

	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	void    alignAndTruncat(std::string text) const;

};

#endif
