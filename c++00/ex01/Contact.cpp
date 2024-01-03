#include <iostream>
#include <iomanip>
#include <string>
#include "Phonebook.hpp"
#include "Contact.hpp"

static std::string	truncate_field(std::string input)
{
	size_t		max_len = 10;

	if (input.length() > max_len)
		return (input.substr(0, max_len - 1) + ".");
	else
		return (input);
}

void Contact::show_contact()
{
	if (this->index == 0)
		return ;
	std::cout << std::left << std::endl;
	std::cout << std::setw(16) << "First name:" << this->FirstName << std::endl;
	std::cout << std::setw(16) << "Last name:" << this->LastName << std::endl;
	std::cout << std::setw(16) << "Nickname:" << this->NickName << std::endl;
	std::cout << std::setw(16) << "Phone number:" << this->PhoneNumber << std::endl;
	std::cout << std::setw(16) << "Darkest secret:" << this->DarkestSecret << std::endl;
}

void Contact::show_index()
{
	if (this->index == 0)
		return ;
	std::cout << std::setw(10) << std::right << this->index << "|";
	std::cout << std::setw(10) << std::right << truncate_field(this->FirstName) << "|";
	std::cout << std::setw(10) << std::right << truncate_field(this->LastName) << "|";
	std::cout << std::setw(10) << std::right << truncate_field(this->NickName) << "|" << std::endl;
}

void	Contact::get_info(int in)
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Please write your first name:" << std::endl;
	getline(std::cin, this->FirstName);
	std::cout << "Please write your last name:" << std::endl;
	getline(std::cin, this->LastName);
	std::cout << "Please insert a nickname:" << std::endl;
	getline(std::cin, this->NickName);
	std::cout << "Please insert your phone number:" << std::endl;
	getline(std::cin, this->PhoneNumber);
	std::cout << "Please tell me your darkest secret:" << std::endl;
	getline(std::cin, this->DarkestSecret);
	this->index = in;
}

Contact::Contact()
{
	FirstName = "";
	LastName = "";
	NickName = "";
	PhoneNumber = "";
	DarkestSecret = "";
	index = 0;
}