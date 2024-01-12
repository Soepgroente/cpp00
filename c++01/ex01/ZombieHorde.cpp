#include <iostream>
#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	Freddy(name);

	Freddy.announce();
}

Zombie* newZombie(std::string name)
{
	Zombie*	Eddie;

	Eddie = new Zombie(name);
	return (Eddie);
}

Zombie* zombieHorde(size_t N, std::string name)
{
	Zombie*	Horde;

	Horde = new Zombie[N];
	for (size_t i = 0; i < N; i++)
	{
		Horde[i].setName(name);
	}
	return (Horde);
}
