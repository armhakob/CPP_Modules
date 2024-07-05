#include "ZombieHorde.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];
	if (horde == NULL)
	{
		std::cout << "Allocation of the horde failed." << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		horde[i].set_name(name);
	return (horde);
}