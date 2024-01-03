#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Phonebook.hpp"

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;

	public:
		int			index;

		void	show_index();
		void	show_contact(void);
		void	get_info(int in);
		Contact();
};

#endif