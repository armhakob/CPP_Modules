#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("rampampam");

    clap.attack("marco");
    clap.attack("royce");
    clap.takeDamage(3);
    clap.takeDamage(3);
    clap.beRepaired(7);
    clap.takeDamage(9);
    clap.attack("muskul");
    clap.beRepaired(5);
    clap.takeDamage(3);
    clap.takeDamage(5);
    clap.beRepaired(2);
}