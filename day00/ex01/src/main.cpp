#include "PhoneBook.class.hpp"

std::string ft_value(std::string value)
{
	while (value.length() == 0)
	{
		std::cout << "Field cat not be empty!"	<< std::endl <<
				  "I'm waiting for a new value : ";
		std::getline(std::cin, value);
	}
	return (value);
}

int		main()
{
	PhoneBook	my_book;
	int 		index = 0;

	std::string cmd;
	std::cout << "-----------------PHONE BOOK-----------------" << std::endl;
	while (!(cmd == "EXIT"))
	{
		std::cout << "Available commands are: ADD | SEARCH | EXIT" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			Contact c;
			std::string value;
			std::getline(std::cin, value);
			std::cout << "First Name : ";
			std::getline(std::cin, value);
			c.setFirstName(ft_value(value));
			std::cout << "Last Name : ";
			std::getline(std::cin, value);
			c.setLastName(ft_value(value));
			std::cout << "Nickname : ";
			std::getline(std::cin, value);
			c.setNickname(ft_value(value));
			std::cout << "Phone Number : ";
			std::getline(std::cin, value);
			c.setPhoneNumber(ft_value(value));
			std::cout << "Darkest Secret : ";
			std::getline(std::cin, value);
			c.setDarkestSecret(ft_value(value));
			if (index < 8)
			{
				my_book.AddContact(c, index);
				index++;
			}
			else
			{
				index = 0;
				my_book.AddContact(c, index);
				index++;
			}
		}
		else if (cmd == "SEARCH")
		{
			my_book.List();
			std::cout << "Please enter an index to view the contact's details "
						 ": ";
			int i;
			std::cin >> i;
			while (i <= 0 || i >= 9) {
				std::cout << "A valid index is between 1 and 8!" << std::endl;
				std::cout << "Enter an index to view: ";
				std::cin >> i;
			}
			std::cout << std::endl;
			my_book.GetContact(i).Display();
			std::cout << std::endl;
		}
	}
	return (0);
}
