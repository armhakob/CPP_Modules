#include "../incs/DiamondTrap.hpp"
#include "../incs/ScavTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	ClapTrap::_name = "default";
	std::cout << "DiamondTrap " << this->_name << " created with default constructor." << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name): ClapTrap(name + "_clapName")
{
	this->_name = name;
	this->_hitP = FragTrap::_hitP;
	this->_energyP = ScavTrap::_energyP;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap " << this->_name << " created." << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " destroyed." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap " << this->_name << " copied." << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &copy)
{
	std::cout << "Assignment operator for DiamondTrap called." << std::endl;
	FragTrap::operator=(copy);
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	if (this->_hitP <= 0)
		std::cout << "Cannot run whoAmI because: DiamondTrap " << this->_name << " is dead." << std::endl;
	else
	{
		std::cout << "DiamondTrap name: " << this->_name << "." << std::endl;
		std::cout << "ClapTrap name: " << ClapTrap::_name << "." << std::endl;
	}
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}