#include "Cure.hpp"

Cure::Cure(void): AMateria("Myalmoy")
{
	std::cout << "Cure's default constructor called" << std::endl;
}

Cure::Cure(std::string const & type): AMateria(type)
{
	std::cout << "Cure parametrized constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure's destructor called" << std::endl;
}

Cure::Cure(Cure const &copy) : AMateria(copy)
{
	std::cout << "Cure's copy constructor called" << std::endl;
}

Cure	&Cure::operator=(Cure const &copy)
{
	this->_type = copy._type;
	std::cout << "Cure's copy assignment operator called"<< std::endl;
	return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << " wounds *"<< std::endl;
}