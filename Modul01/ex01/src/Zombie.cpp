#include "ZombieHorde.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << _name << " died. RIP🪦\n"  << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}