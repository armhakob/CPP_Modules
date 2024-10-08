#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat's default constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat's destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy): WrongAnimal(copy)
{
	std::cout << "WrongCat's copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "WrongCat's assignment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow🐈‍⬛" << std::endl;
}