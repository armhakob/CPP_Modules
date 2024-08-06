#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(std::string z);
        ~Zombie();

        void    announce(void)const;
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif