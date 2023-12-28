#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	public:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		uint64_t	time_added;

	private:
		std::string DarkestSecret;
};

void	add_contact();
void	search_contact();

#endif