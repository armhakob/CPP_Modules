#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    for (int i = 0; i < 4; i ++)
		_inventory[i] = NULL;
	std::cout << "MateriaSource's default constructor called" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i ++)
		delete _inventory[i];
	std::cout << "MateriaSource's destructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
    for (int i = 0; i < 4; i ++)
	{
		_inventory[i] = NULL;
		if (copy._inventory[i] != NULL)
			_inventory[i] = copy._inventory[i]->clone();
	}
	std::cout << "MateriaSource's copy constructor called" << std::endl;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &copy)
{
    if (this == &copy)
			return (*this);
	for (int i = 0; i < 4; i ++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = copy._inventory[i]->clone();
	}
	std::cout << "MateriaSource's copy assignment operator called"<< std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if(this->_inventory[i] == materia)
			return;
		if (!this->_inventory[i])
		{
			this->_inventory[i] = materia;
			std::cout << "Material learn" << std::endl;
			return ;
		}
	}
	std::cout << "There is no space in material source" << std::endl;
}

AMateria* MateriaSource::createMateria (std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	std::cout << "🦧unknown type"<< std::endl;
	return (NULL);
}
