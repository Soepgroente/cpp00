#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->name << "attacks with their" << this->weapon.getType() << std::endl;
}

HumanA::HumanA(Weapon weapon, std::string name)
{
	this->weapon = weapon;
	this->name = name;
}

HumanA::~HumanA()
{
}