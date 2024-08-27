#ifndef AFORM_HPP
# define AFORM_HPP

# include "../incs/Bureaucrat.hpp"

class Bureaucrat;

class	AForm {
private:

	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;

	AForm();

public:
	AForm(const std::string& name, int gradeToSign, int gradeToExecute);
	AForm(const AForm& frm);
	virtual ~AForm();

	AForm&	operator=( const AForm& frm );

	const std::string&	getName() const;
	bool				getSigned() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;

	void				beSigned(Bureaucrat& bureaucrat);

	virtual void		execute(const Bureaucrat& executor) const = 0;

	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw() {
			return "Form exception: exception: grade too high!"; 
		}
    };
	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw() {
			return "Form exception: exception: grade too low!";
		}
	};
	class NotSignedException : public std::exception {
	public:
		const char *what() const throw() {
			return "Form exception: exception: form not signed!";
		}
	};
};

std::ostream&	operator<<(std::ostream &os, AForm& form);

#endif