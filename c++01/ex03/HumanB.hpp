#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		Weapon*		_weapon;
		std::string	_name;
	
	void	attack();
	void	setWeapon(Weapon& weapon);
	HumanB(std::string name);
	~HumanB();
};

#endif