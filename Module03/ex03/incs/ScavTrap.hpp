#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "../incs/ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &copy);
		ScavTrap	&operator=(ScavTrap const &copy);
		virtual		~ScavTrap(void);
		void		guardGate(void);
		void		attack(const std::string& target);
};

#endif