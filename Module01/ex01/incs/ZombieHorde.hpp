#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string _name;
   public:
        Zombie();
        ~Zombie();

        void    announce(void)const;
        void    set_name(std::string name);
};

Zombie  *zombieHorde(int N, std::string name);

#endif