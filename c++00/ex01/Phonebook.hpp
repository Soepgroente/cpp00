#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

using namespace std;

class Phonebook
{
	public:
		Contact	entries[8];
};

void	print_phonebook();

#endif