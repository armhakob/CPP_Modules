#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(std::string const & type);
        Ice(Ice const &copy);
        Ice &operator=(Ice const &copy);
        ~Ice();
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif