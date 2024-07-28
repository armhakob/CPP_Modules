#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap("Default ClapTrap")
{
	this->_hitP = 100;
	this->_energyP = 50;
	this->_damage = 20;
	std::cout << "ScavTrap " << this->_name << " created." << std::endl;
}

ScavTrap::ScavTrap(std::string const &name)
{
	this->_name = name;
	this->_hitP = 100;
	this->_energyP = 50;
	this->_damage = 20;
	std::cout << "ScavTrap " << this->_name << " created." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap " << this->_name << " copied." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " destroyed." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "Copy assignment operator for ScavTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	if (this->_hitP <= 0)
		std::cout << "Cannot switch to Gate-keeper mode because: ClapTrap " << this->_name << " is already dead." << std::endl;
	else
		std::cout << "ScavTrap from ClapTrap " << this->_name << " switched to Gate-keeper mode." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyP && this->_hitP > 0)
	{
		this->_energyP--;
		std::cout << "ScavTrap " << this->_name << " attaced " << target << " causing " << this->_damage << " points of damage!" << std::endl;
	}
	if (this->_hitP <= 0)
		std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
	else if (!this->_energyP)
		std::cout << "ScavTrap " << this->_name << " is out of energy points!" << std::endl;
}