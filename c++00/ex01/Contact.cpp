#include <iostream>
#include <iomanip>
#include <string>
#include "Phonebook.hpp"
#include "Contact.hpp"

void	print_contact(Contact entry)
{
	std::setw(10);
	std::cout << left << entry.FirstName << std::endl;
	std::cout << right << entry.FirstName << std::endl;
}

Contact	add_contact()
{
	Contact	new_entry;

	std::cout << "Please write your first name:" << std::endl;
	std::cin >> new_entry.FirstName;
	std::cout << "Please write your last name:" << std::endl;
	std::cin >> new_entry.LastName;
	std::cout << "Please insert a nickname:" << std::endl;
	std::cin >> new_entry.NickName;
	std::cout << "Please insert your phone number:" << std::endl;
	std::cin >> new_entry.PhoneNumber;
	std::cout << "Please tell me your darkest secret:" << std::endl;
	std::cin >> new_entry.DarkestSecret;

	return (new_entry);
}

void	search_contact()
{
	return ;
}