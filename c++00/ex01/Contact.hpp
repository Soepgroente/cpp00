#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	public:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
		std::time_t	time_added;

	Contact()
	{
		time_added = std::time(0);
	}
};

Contact	add_contact();
void	search_contact();

#endif