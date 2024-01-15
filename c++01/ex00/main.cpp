#include <iostream>
#include "Zombie.hpp"

int	main()
{
	Zombie*	Ed;

	Ed = newZombie("Ed");
	Ed->announce();
	randomChump("Fred");
	delete Ed;
	return (0);
}
