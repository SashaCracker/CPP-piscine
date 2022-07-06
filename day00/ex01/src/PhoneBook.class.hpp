#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
#include "Contact.class.hpp"

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();

	void	AddContact(Contact c, int index);
	Contact	GetContact(int i) const;
	void	List() const;

private:
	Contact		_contacts[8];
};
#endif
