#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

const std::string ShrubberyCreationForm::_shrubbery = \
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⣀⣠⣀⣠⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡴⣶⣿⡿⠛⠛⠛⠻⠯⣿⠿⢿⣻⣶⣤⣤⣄⣀⣀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣟⣿⣯⡿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠉⠙⠿⠿⢿⡷⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣶⡾⠿⠚⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢳⢿⣿⠳⡦⠐⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣰⣾⠟⠁⠀⠀⠀⠀⢀⣤⢶⡀⠀⠀⠀⠀⠀⣠⠶⢾⡏⠓⡆⠀⠀⠀⠀⠐⠚⠛⠻⣿⣿⠷⣿⣷⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣼⡗⡾⠋⠉⠛⠀⠀⠀⣀⣴⣾⡉⡄⠀⠀⠀⠀⠀⠐⠾⣧⠀⡿⠃⠀⠳⣄⡀⠀⠀⠀⠀⠀⠀⠘⠻⡻⣿⣿⣿⢿⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⠉⠉⠁⠀⠀⠀⠀⠀⣤⡴⣏⣀⠀⢹⣿⣦⡄⠀⠀⠀⠠⣄⣹⣧⡇⠀⠀⠀⠀⠹⣦⠀⠀⠀⠀⢠⣀⠀⡇⠹⣟⣧⣼⣤⣤⣄⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⢀⣿⠛⡤⠤⠤⣄⠀⠀⠦⠤⣿⡄⠀⠙⣷⡌⣿⡀⠀⠀⠀⣴⢤⠻⣿⣿⡇⠀⠀⠀⢠⣴⠆⠘⣶⠤⠀⠀⠈⠓⢸⡄⠀⢹⣧⣤⣿⡛⢛⣇⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⢸⡏⠀⠀⠀⠀⢀⡀⣠⣤⣴⢿⣿⠳⣤⣬⣿⡝⠣⠀⠀⠀⠙⠀⠀⡄⠭⡇⠀⡀⠀⠀⠀⠀⢠⣿⣖⠄⠀⣤⠞⢫⡀⠀⠀⠈⠃⢿⣿⡟⠁⠀⠀⠀\n \
⠀⠀⠀⠀⠀⣠⣴⣿⡅⢠⡤⣄⣰⠋⢿⣷⠖⠀⠀⠀⠀⠈⠛⣿⣧⣦⣼⣦⡤⣴⡚⣿⣷⣶⣶⣾⣏⠽⠇⠀⠀⢲⣿⣁⣀⡶⠋⠀⠀⠳⠀⠀⠄⠀⠘⠿⣧⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⣿⣟⣿⣷⡟⢠⣼⣽⡷⢦⡁⠀⠀⠀⢀⣦⣶⣤⣘⣻⡆⠉⣿⣿⣤⣿⣿⡛⠻⣿⡷⣾⣿⢳⡄⠀⠀⢨⠟⠋⠴⡿⠲⣤⣤⡀⠀⠀⠀⠀⣤⣽⡇⠀⠀⠀\n \
⠀⠀⠀⢀⣀⣿⣿⣿⡿⠛⠛⠛⠃⠀⠀⠀⠠⣼⣛⣿⣷⣿⣿⣿⣆⠙⣟⡁⣰⣌⡙⢷⠀⠀⠀⢶⣟⣻⡷⣤⢀⡔⢦⡀⠀⠀⠀⠀⠀⠀⢹⣤⣄⠀⢸⡟⠒⢻⣦⡀⠀\n \
⠀⠀⠀⣠⣙⣿⣿⣏⠀⠀⠀⠀⢀⠀⠀⠀⣼⣿⠛⠋⢛⣛⣨⣍⢹⣿⣿⡟⠛⢿⣌⣿⣦⣄⢀⣼⣿⣿⣿⣿⣿⣿⢿⣭⣧⣦⠀⠀⠀⠀⠀⠈⠻⠆⢠⣭⢛⡟⣿⣿⡀\n \
⠀⠰⢿⣿⣿⡿⣿⣿⣷⡶⣴⠟⠃⠀⣰⠲⢿⣿⣦⣨⣿⡥⠈⠉⢿⡻⠗⢻⡆⢀⠀⠙⠛⢿⣻⡇⠀⢸⡟⠉⠀⠙⠂⠀⠉⠡⣅⠀⣄⣤⡴⠀⠀⠀⠀⢻⣿⣷⣿⣿⠀\n \
⠀⠀⣤⣽⣿⣋⡿⠟⠛⠟⠿⠁⢠⡬⣧⣴⡶⢽⡏⠉⠉⢿⡍⠁⢀⠁⠀⠠⡟⢮⣧⣀⠀⠀⢏⡇⠀⢸⠇⠀⠀⠀⢰⠀⠀⠴⠈⠛⢁⣰⡇⠀⠀⠀⠀⠀⣼⣿⠉⠀⠀\n \
⠀⠸⢿⣿⣿⡻⢀⣀⠀⠀⠀⢀⡨⠶⠾⠋⠀⠀⠈⠉⠀⠞⣷⠀⢸⡄⠀⢠⣀⠀⣿⠘⡆⠀⣿⣇⣀⡼⢰⡄⠀⣴⠋⠀⠀⠀⠀⠂⠘⠿⣷⡇⠀⠀⢀⣶⣋⣿⠀⠀⠀\n \
⢠⣄⣼⣿⣿⣿⣿⣥⣤⡀⠘⠋⢀⡀⢀⣄⣀⣀⡰⠚⠂⣠⣿⠄⠈⢳⣦⣈⣿⣿⣿⡀⣿⠀⡟⠉⣿⡿⣿⣦⡾⣷⠉⠀⠀⣀⡴⠄⠀⠀⠚⢀⠀⠀⠠⣽⣿⠁⠀⠀⠀\n \
⠘⢿⣞⢿⣿⢿⡽⠿⣭⣍⣀⡀⠀⣁⣈⠛⠙⠻⣦⣀⣠⣾⡟⠑⢒⣺⣿⣛⠿⣿⣿⣭⣿⣦⣿⣾⣹⣧⣼⠏⢀⡞⠀⠀⣰⣿⠁⠀⠀⠀⡀⠈⢗⡶⢰⣿⡷⠋⠀⠀⠀\n \
⠀⠀⠙⢿⣿⣾⣷⣄⡉⠙⠉⠑⠂⣉⡋⢿⣷⣦⣶⣿⣿⣵⣿⢾⠋⠛⣿⣷⣾⣿⣬⣿⣿⣿⣿⢿⣿⣿⡏⠠⡼⠃⢀⣰⣿⠁⠀⠀⠀⣈⠿⢿⢟⣀⣈⣿⡶⠀⠀⠀⠀\n \
⠀⠀⠀⢺⣿⢿⠿⣿⠆⢐⢀⣠⡤⢾⣟⣻⣟⣿⡛⣿⣿⣿⣿⡶⣆⡙⠛⣿⣿⣿⣿⣛⢻⣿⣿⣿⣿⡿⢷⣶⣇⣠⣿⡿⠀⣰⣶⠶⡛⠁⠀⠰⣻⣿⣿⠏⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠉⠿⠿⠙⣦⣼⡿⢿⣿⣦⣸⣿⣿⣿⣿⣞⣿⣿⣿⣿⣉⢿⣿⣿⣿⣋⣯⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⡷⠞⠉⣰⡾⠉⢠⣄⣶⣿⡿⠁⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣏⣺⣿⣿⡟⠛⢿⣺⡿⣿⡽⣿⣿⣿⣿⣷⣿⣿⠻⢿⣿⣿⣿⡿⣿⡿⢱⣼⣿⣴⣽⣿⣿⣅⣴⣶⣠⣤⡶⣾⣿⣿⠃⠁⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⢿⣿⣴⡤⡿⣿⠿⢦⣽⣿⣿⣿⣙⣿⣿⠓⠚⣻⣿⣿⣿⣿⣿⣿⣿⡏⣿⠿⣯⣍⢻⣿⠉⣹⠥⢀⡸⠿⠿⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⠳⣿⡿⠶⠾⢉⡛⢻⣿⣯⣽⣿⣿⣷⣿⣿⢻⣿⣿⣿⣿⣿⡿⣇⣠⣿⣿⣟⣻⣿⣾⣶⢿⣿⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⠻⣦⣤⡘⠻⣿⣿⢻⣿⡻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣹⣿⣿⣿⠟⠓⠛⠛⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡈⢻⢿⣿⣿⣿⣿⣻⣿⣿⣿⣻⣿⣟⣿⣿⣿⣿⡿⠛⠟⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠀⠈⣿⣿⣿⣿⣿⣿⣿⣾⣿⣥⡿⠟⠛⠛⠛⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⠿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿⣿⡟⣻⣿⣿⣄⠀⠀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣤⣤⣤⣤⣴⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⠿⠶⠤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣏⣿⣿⣿⡷⣿⣷⣶⣤⢄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠿⠛⠛⠛⠻⠿⠿⠟⠋⣉⣉⣿⠿⠿⠟⠛⠻⠁⠈⢟⠻⡿⠛⣻⣯⡿⣻⣿⣿⣿⠷⠧⠤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⢀⣀⠀⠀⠉⠻⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⠉⠁⠉⠉⠑⠚⠳⠬⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠉⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n \
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀";



ShrubberyCreationForm::ShrubberyCreationForm(): \
		AForm("ShrubberyCreationForm", 145, 137), _target("Marco") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): \
		AForm("ShrubberyCreationForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm( \
		const ShrubberyCreationForm& frm):
		AForm(frm), _target(frm._target)
{}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(\
		const ShrubberyCreationForm& frm)
{
	(void)frm;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
        throw AForm::NotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
	std::ofstream	file((_target + "_shrubberry").c_str());
	file << _shrubbery << std::endl;
	file.close();
}
