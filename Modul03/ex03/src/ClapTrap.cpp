#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Default"), _hitP(10), _energyP(10), _damage(0)
{
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): _name(name), _hitP(10), _energyP(10), _damage(0)
{
	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std::cout << "ClapTrap " << this->_name << " copied." << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &copy)
{
	std::cout << "Copy assignment operator for ClapTrap called." << std::endl;
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hitP = copy._hitP;
		this->_energyP = copy._energyP;
		this->_damage = copy._damage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyP && this->_hitP > 0)
	{
		this->_energyP--;
		std::cout << "ClapTrap " << this->_name << " attaced " << target << " causing " << this->_damage << " points of damage!" << std::endl;
	}
	if (this->_hitP <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	else if (!this->_energyP)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (static_cast<int>(amount) < 0)
	{
		std::cout << "Wrong amount" << std::endl;
		return ;
	}
	if (this->_hitP > 0)
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;
		this->_hitP -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
	if (this->_hitP < 0)
		this->_hitP = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (static_cast<int>(amount) < 0)
	{
		std::cout << "Wrong amount" << std::endl;
		return ;
	}
	if (this->_hitP > 0 && this->_energyP)
	{
		std::cout << "ClapTrap " << this->_name << " has been repaired " << amount << " points of damage!" << std::endl;
		this->_energyP--;
		this->_hitP += amount;
	}
	if (this->_hitP <= 0)
		std::cout << "Cannot repair because: ClapTrap " << this->_name << " is already dead." << std::endl;
	else if (!this->_energyP)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}