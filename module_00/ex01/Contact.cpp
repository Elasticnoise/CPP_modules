#include "Contact.hpp"
#include <iomanip>

Contact::Contact() : index(0) {}

Contact::~Contact() {}


void    Contact::newContact(int cid)
{
	std::cout << std::endl << "\033[34mInput the information of the new contact\033[0m" << std::endl;
	index = cid;
	std::cout << "First name: ";
	std::cin >> this->firstName;
	std::cout << "Last name: ";
	std::cin >> this->lastName;
	std::cout << "Nickname: ";
	std::cin >> this->nickName;
	std::cout << "Phone number: ";
	std::cin >> this->phoneNumber;
	std::cout << "Darkest secret: ";
	std::cin >> this->darkestSecret;
	std::cout << std::endl;
}

void    Contact::alignAndTruncat(std::string text) const
{
	if (text.length() > 10)
		std::cout << text.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << text;
}

void    Contact::displayContact()
{
	this->alignAndTruncat(std::to_string(index));
	std::cout << "|";
	this->alignAndTruncat(this->firstName);
	std::cout << "|";
	this->alignAndTruncat(this->lastName);
	std::cout << "|";
	this->alignAndTruncat(this->nickName);
	std::cout << std::endl;
}

void    Contact::displayDetailed()
{
	std::cout << std::endl << "\033[30;46m All details of the contact with index " << index << " \033[0m" << std::endl;
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
	std::cout << std::endl;
}
