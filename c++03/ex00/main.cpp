#include "ClapTrap.hpp"
#include <iostream>

int	main()
{
	std::string	a("Sjonnie");
	std::string	b("Harry");
	ClapTrap	sjonnie(a);
	ClapTrap	harry(b);

	sjonnie.setAttack(2);
	for (int i = 0; i < 20; i++)
	{
		sjonnie.attack(b);
		harry.beRepaired(2);
		harry.takeDamage(sjonnie.getAttack());
	}
}