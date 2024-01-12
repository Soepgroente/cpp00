#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon	club = Weapon("crude spiked club");
	HumanA	bob(club, "Bob");
	HumanB	jim("Jim");

	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();

	return (0);
}