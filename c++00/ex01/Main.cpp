#include <iostream>
#include <string>
#include "Phonebook.hpp"
#include "Contact.hpp"

int32_t	main(void)
{
	std::string	user_input;

	std::cout << "Hello! Welcome to my phantastic phonebook!" << std::endl;
	while (true)
	{
		std::cout << "\nPlease write:\nADD to add a contact\nSEARCH to find a previously added contact\nEXIT to exit" << std::endl;
		std::cin >> user_input;
		if (user_input == "ADD")
		{
			add_contact();
		}
		else if (user_input == "SEARCH")
			search_contact();
		else if (user_input == "EXIT")
			return(EXIT_SUCCESS);
	}
}