#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat's default constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat's destructor called" << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	std::cout << "Cat's copy constructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &copy)
{
	std::cout << "Cat's assignment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow🐈" << std::endl;
}