#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type): _name(name), _weapon(type)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}