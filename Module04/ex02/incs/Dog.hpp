#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{
    public:
        Dog(void);
        Dog(Dog const &copy);
        ~Dog(void);
        Dog &operator=(Dog const &copy);
        void makeSound(void) const;
};

#endif