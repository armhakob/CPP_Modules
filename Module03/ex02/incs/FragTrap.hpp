#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "../incs/ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &copy);
		FragTrap	&operator=(FragTrap const &copy);
		~FragTrap(void);
		void		highFivesGuys(void);
};

#endif