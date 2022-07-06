#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

# include <string>
#include <iostream>

class Contact
{
public:
	Contact();
	~Contact();
	void            setFirstName(std::string);
	void            setLastName(std::string);
	void            setNickname(std::string);
	void            setPhoneNumber(std::string);
	void            setDarkestSecret(std::string);
	std::string     getFirstName();
	std::string     getLastName();
	std::string     getNickname();
	std::string     getPhoneNumber();
	std::string     getDarkestSecret();
	void			Display() const;

private:
	std::string     _firstName;
	std::string     _lastName;
	std::string     _nickname;
	std::string     _phoneNumber;
	std::string     _darkestSecret;
};

#endif
