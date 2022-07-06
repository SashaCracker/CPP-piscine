#include "Contact.class.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string Contact::getFirstName()
{
	return (this->_firstName);
}

std::string Contact::getLastName()
{
	return (this->_lastName);
}

std::string Contact::getNickname()
{
	return (this->_nickname);
}

std::string Contact::getPhoneNumber()
{
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return (this->_darkestSecret);
}

void        Contact::setFirstName(std::string str)
{
	this->_firstName = str;
	return ;
}

void        Contact::setLastName(std::string str)
{
	this->_lastName = str;
	return ;
}

void        Contact::setNickname(std::string str)
{
	this->_nickname = str;
	return ;
}

void        Contact::setPhoneNumber(std::string str)
{
	this->_phoneNumber = str;
	return ;
}

void        Contact::setDarkestSecret(std::string str)
{
	this->_darkestSecret = str;
	return ;
}

void		Contact::Display() const
{
	std::cout << "First Name       : " << this->_firstName << std::endl;
	std::cout << "Last Name        : " << this->_lastName << std::endl;
	std::cout << "Nickname         : " << this->_nickname << std::endl;
	std::cout << "Phone Number     : " << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret   : " << this->_darkestSecret << std::endl;

}
