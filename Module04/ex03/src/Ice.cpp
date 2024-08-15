#include "Ice.hpp"

Ice::Ice(void): AMateria("Myalmoy")
{
	std::cout << "Ice's default constructor called" << std::endl;
}

Ice::Ice(std::string const & type): AMateria(type)
{
	std::cout << "Ice parametrized constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice's destructor called" << std::endl;
}

Ice::Ice(Ice const &copy) : AMateria(copy)
{
	std::cout << "Ice's copy constructor called" << std::endl;
}

Ice	&Ice::operator=(Ice const &copy)
{
	this->_type = copy._type;
	std::cout << "Ice's copy assignment operator called"<< std::endl;
	return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}
