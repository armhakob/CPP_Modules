#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(std::string const & type);
        Cure(Cure const &copy);
        Cure &operator=(Cure const &copy);
        ~Cure();
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif