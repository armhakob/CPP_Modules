#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hitP;
		int			_energyP;
		int			_damage;
	public:
		ClapTrap(void);
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap const &copy);
		ClapTrap	&operator=(ClapTrap const &copy);
		~ClapTrap(void);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif