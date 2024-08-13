#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string _type;
    public:
        AAnimal(void);
        AAnimal(std::string type);
        AAnimal(AAnimal const &copy);
        AAnimal              &operator=(AAnimal const &copy);
        virtual             ~AAnimal(void);
        const std::string	&getType(void) const;
		void				setType(std::string str);
        virtual void        makeSound(void) const = 0;
};

#endif