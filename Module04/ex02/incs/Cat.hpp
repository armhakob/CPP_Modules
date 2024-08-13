#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
    public:
        Cat(void);
        Cat(Cat const &copy);
        ~Cat(void);
        Cat &operator=(Cat const &copy);
        void makeSound(void) const;
};

#endif