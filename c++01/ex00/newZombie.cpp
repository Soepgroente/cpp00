#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie*	Eddie;

	Eddie = new Zombie(name);
	return (Eddie);
};