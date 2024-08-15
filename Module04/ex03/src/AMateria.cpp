#include "AMateria.hpp"

AMateria::AMateria(void): _type("Myalmoy")
{
	std::cout << "AMateria's default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << "AMateria parametrized constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria's destructor called" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
	std::cout << "AMateria's copy constructor called" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &copy)
{
	this->_type = copy._type;
	std::cout << "AMateria's copy assignment operator called"<< std::endl;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* Was I supposed to do something with" << target.getName() << " *" << std::endl;
}
