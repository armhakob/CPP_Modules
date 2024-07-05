#ifndef HARL_FILTR_HPP
# define HARL_FILTR_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class Harl
{
    private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Harl();
		~Harl();

		void	complain(std::string level);
};

#endif