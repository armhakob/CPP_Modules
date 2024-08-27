#ifndef INTERN_HPP
# define INTERN_HPP

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern& src);
        ~Intern();

        Intern& operator=(const Intern& frm);

        AForm*   makeForm(std::string name, std::string target);

        enum Forms {
	        ROBOTOMY = 'r',
	        SHRUBBERY = 's',
	        PRESIDENTIAL = 'p'
        };
};

#endif