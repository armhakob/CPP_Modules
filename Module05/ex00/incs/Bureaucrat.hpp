#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>
# include <string>

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

class	Bureaucrat {
private:
	const std::string	_name;
	int					_grade;

	Bureaucrat();

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& br);
	Bureaucrat&	operator=(const Bureaucrat& br);
	~Bureaucrat();

	const std::string&	getName() const;
	int					getGrade() const;
	void				setGrade(int grade);

	void				incrementGrade();
	void				decrementGrade();

	class	GradeTooHighException : public std::exception {
		public:
			const char*	what() const throw();
	};

	class	GradeTooLowException : public std::exception {
		public:
			const char*	what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat &br);

#endif