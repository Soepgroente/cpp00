#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(Weapon& weapon, std::string name) : _weapon(weapon), _name(name)
{
}

HumanA::~HumanA()
{
}