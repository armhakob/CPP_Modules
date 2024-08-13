#include "AAnimal.hpp"

AAnimal::AAnimal(void): _type("Myalmoy")
{
	std::cout << "AAnimal's default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type): _type(type)
{
	std::cout << "AAnimal parametrized constructor called" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal's destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
	this->_type = copy._type;
	std::cout << "AAnimal's copy constructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &copy)
{
	std::cout << "AAnimal's copy assignment operator called"<< std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

const std::string	&AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::setType(std::string str)
{
	this->_type = str;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "AAnimal Voices" << std::endl;
}
