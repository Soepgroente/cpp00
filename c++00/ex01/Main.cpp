#include <iostream>
#include <string>
#include "Phonebook.hpp"

int32_t	main(void)
{
	std::string	user_input;

	std::cout << "Hello!\n" << std::endl;
	while (true)
	{
		std::cout << "Please use ADD to add a contact\nOr SEARCH to find a previously added contact\nOr EXIT to exit" << std::endl;
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