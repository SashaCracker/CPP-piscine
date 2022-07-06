#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(){}
PhoneBook::~PhoneBook(){}

Contact	PhoneBook::GetContact(int i) const
{
	return this->_contacts[i - 1];
}

void	PhoneBook::AddContact(Contact c, int index)
{
	this->_contacts[index] = c;
}

void	displayField(std::string field)
{

	if (field.size() > 10)
	{
		field = field.erase(9, field.length());
		field.append(".");
		std::cout << field;
	}
	else
		std::cout << std::setw(10) << std::right << std::setfill(' ') << field;

	std::cout << '|';
}

void	PhoneBook::List() const
{
	displayField("Index");
	displayField("First name");
	displayField("Last name");
	displayField("Nickname");
	displayField("Phone number");
	displayField("Darkest Secret");
	std::cout << std::endl;
	int i = 0;
	while (i < 8)
	{
		Contact c = this->_contacts[i];

		displayField(std::to_string(i + 1));
		displayField(c.getFirstName());
		displayField(c.getLastName());
		displayField(c.getNickname());
		displayField(c.getPhoneNumber());
		displayField(c.getDarkestSecret());
		std::cout << std::endl;
		i++;
	}
	std::cout << std::endl;
}
