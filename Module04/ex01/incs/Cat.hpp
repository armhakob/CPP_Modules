#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp" 

class Cat : public Animal
{
	private:
		Brain	*brain;
    public:
        Cat(void);
        Cat(Cat const &copy);
        ~Cat(void);
        Cat &operator=(Cat const &copy);
		Brain *getBrain(void) const;
        void makeSound(void) const;
};

#endif
