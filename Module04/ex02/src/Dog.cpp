#include "../incs/Dog.hpp"

Dog::Dog(void): AAnimal("Dog")
{
	std::cout << "Dog's default constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog's destructor called" << std::endl;
}

Dog::Dog(Dog const &copy): AAnimal(copy)
{
	std::cout << "Dog's copy constructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &copy)
{
	std::cout << "Dog's assignment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof🦮" << std::endl;
}