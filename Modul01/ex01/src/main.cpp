#include "ZombieHorde.hpp"

int master(void)
{
    Zombie	*horde;
	int		zombieAmount = 10;

	horde = zombieHorde(zombieAmount, "Pedro");
	if (horde == NULL)
		return (EXIT_FAILURE);
	for (int i = 0; i < zombieAmount; ++i)
		horde[i].announce();
	delete[] horde;
	horde = zombieHorde(0, "Failed");
	delete[] horde;
	return (EXIT_SUCCESS);
}

int main(void) {
	master();
	// system("leaks zombieHorde");
}