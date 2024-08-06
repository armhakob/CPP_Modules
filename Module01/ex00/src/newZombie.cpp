#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie *zombiik = new Zombie(name);
    zombiik->announce();
    return (zombiik);
}