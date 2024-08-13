#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &copy);
        WrongAnimal         &operator=(WrongAnimal const &copy);
        virtual             ~WrongAnimal(void);
        const	std::string	&getType(void) const;
		void		        setType(std::string str);
        void                makeSound(void) const;
};

#endif