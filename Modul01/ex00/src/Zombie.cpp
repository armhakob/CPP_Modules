#include "Zombie.hpp"

Zombie::Zombie(std::string z) : _name(z)
{
    std::cout << "Zombie " << _name << " created.🧟‍♂️" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " died. RIP🪦\n"  << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}
