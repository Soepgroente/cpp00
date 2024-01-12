#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
		Weapon		weapon;
		std::string	name;
	
	void	attack();
	HumanA(Weapon weapon, std::string name);
	~HumanA();
};