#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie = newZombie("Marco Royce");
    randomChump("Lyudovikos XV");
    delete zombie;
    return(EXIT_SUCCESS);
}