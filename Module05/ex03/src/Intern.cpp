#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& src)
{
	*this = src;
}

Intern::~Intern() {}

Intern&	Intern::operator=(const Intern& frm)
{
	( void ) frm;
	return (*this);
}

AForm*   Intern::makeForm( std::string name, std::string target )
{
	char	key;

	std::string formTypes[] = {
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};

	for (int i = 0; i < 3; ++i)
	{
		if (!name.compare(formTypes[i]))
			key = name[0];
	}

	switch (key)
	{
	case ROBOTOMY:
		std::cout << "Intern creates " << name << std::endl;
		return new RobotomyRequestForm(target);
	case SHRUBBERY:
		std::cout << "Intern creates " << name << std::endl;
		return new ShrubberyCreationForm(target);
	case PRESIDENTIAL:
		std::cout << "Intern creates " << name << std::endl;
		return new PresidentialPardonForm(target);
	default:
		std::cout << "Intern cannot create " << name << " form" << std::endl;
		return NULL;
	}
	return NULL;
}