#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form {
private:

	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;

	Form();

public:
	Form(const std::string& name, int gradeToSign, int gradeToExecute);
	Form(const Form& frm);
	~Form();

	Form&	operator=( const Form& frm );

	const std::string&	getName() const;
	bool				getSigned() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;

	void				beSigned(Bureaucrat& bureaucrat);

	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw() {
			return "Form exception: exception: grade too high!"; 
		}
    };
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "Form exception: exception: grade too low!";
		}
	};
	class NotSignedException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return "Form exception: exception: form not signed!";
		}
	};
};

std::ostream&	operator<<(std::ostream &os, Form& form);

#endif