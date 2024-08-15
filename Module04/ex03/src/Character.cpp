#include "Character.hpp"

Character::Character(void): _name("Myalmoy")
{
    for (int i = 0; i < 4; i ++)
		_inventory[i] = NULL;
	std::cout << "Character's default constructor called" << std::endl;
}

Character::Character(std::string const & name): _name(name)
{
    for (int i = 0; i < 4; i ++)
		_inventory[i] = NULL;
	std::cout << "Character parametrized constructor called" << std::endl;
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i ++)
		delete _inventory[i];
	std::cout << "Character's destructor called" << std::endl;
}

Character::Character(Character const &copy)
{
    for (int i = 0; i < 4; i ++)
	{
		_inventory[i] = NULL;
		if (copy._inventory[i] != NULL)
			_inventory[i] = copy._inventory[i]->clone();
	}
	std::cout << "Character's copy constructor called" << std::endl;
}

Character	&Character::operator=(Character const &copy)
{
    if (this == &copy)
			return (*this);
	this->_name = copy._name;
	for (int i = 0; i < 4; i ++)
	{
		delete this->_inventory[i];
		this->_inventory[i] = copy._inventory[i]->clone();
	}
	std::cout << "Character's copy assignment operator called"<< std::endl;
	return (*this);
}

std::string const & Character::getName() const
{
    return (_name);
}

void	Character::equip(AMateria* m)
{
	int	i;

	for (i = 0; i < 4 && _inventory[i] != NULL; i ++)
		;
	if (i > 3 || _inventory[i] != NULL)
		std::cout << "No space in inventory" << std::endl;
	else if (m != NULL)
	{
		std::cout << "Character " << _name << " equipped " \
			<< m->getType() << std::endl;
		if (inInventory(m) == true)
			_inventory[i] = m->clone();
		else
			_inventory[i] = m;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (_inventory[idx] != NULL)
		{
			std::cout << "Character " << _name << " unequipped " \
				<< _inventory[idx]->getType() << std::endl;
			_inventory[idx] = NULL;
		}
	}
	else
		std::cout << "Index out of bound!" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Index out of bound!" << std::endl;
	else if (_inventory[idx] != NULL)
		_inventory[idx]->use(target);
	else
		std::cout << "No materia..."<< std::endl;
}

bool	Character::inInventory(AMateria *m) const
{
	if (m)
	{
		for (int i = 0; i < 4; i ++)
		{
			if (_inventory[i] == m)
				return (true);
		}
	}
	return (false);
}