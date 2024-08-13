#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("Myalmoy")
{
	std::cout << "WrongAnimal's default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	std::cout << "Animal parametrized constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal's destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	this->_type = copy._type;
	std::cout << "WrongAnimal's copy constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal's copy assignment operator called"<< std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

const	std::string	&WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string str)
{
	this->_type = str;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal Voices" << std::endl;
}
