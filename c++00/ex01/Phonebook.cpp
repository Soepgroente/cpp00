#include <iostream>
#include <iomanip>
#include <string>
#include "Phonebook.hpp"
#include "Contact.hpp"

static bool	parse_attempt(int& index, std::string& search)
{
	try
	{
        index = std::stoi(search);
    }
	catch (std::invalid_argument)
	{
		std::cout << "\nPlease insert a valid index" << std::endl;
		return (false);
    }
	return (true);
}

void	Phonebook::add_contact(void)
{
	int i = 0;

	while (entries[i].index != 0)
		i++;
	entries[i].get_info(i + 1);
}

void	Phonebook::search_contact(void)
{
	std::string search;
	int	index = 0;

	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "Name" << "|";
	std::cout << std::setw(10) << std::right << "Last name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << "|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		this->entries[i].show_index();
	}
	std::cout << "\nPlease choose which contact to display" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (index == 0)
	{
		getline(std::cin, search);
		parse_attempt(index, search);
	}
	this->entries[index - 1].show_contact();
}

Phonebook::Phonebook(void)
{
}