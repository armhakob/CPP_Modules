#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain *brain;
    public:
        Cat(void);
        Cat(Cat const &copy);
        ~Cat(void);
        Cat &operator=(Cat const &copy);
		Brain *getBrain(void) const;
        void makeSound(void) const;
};

#endif
