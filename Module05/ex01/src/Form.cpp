#include "Form.hpp"

Form::Form()
	: _name("Marco")
	, _isSigned(false)
	, _gradeToSign(0)
	, _gradeToExecute(0)
{}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute)
	: _name(name)
	, _isSigned(false)
	, _gradeToSign(gradeToSign)
	, _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& frm)
	: _name(frm._name)
	, _isSigned(frm._isSigned)
	, _gradeToSign(frm._gradeToSign)
	, _gradeToExecute(frm._gradeToExecute)
{}

Form::~Form() {}

const std::string& Form::getName() const
{
	return _name;
}

bool Form::getSigned() const
{
	return _isSigned;
}

int Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int Form::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if ( bureaucrat.getGrade() > _gradeToSign )
		throw Form::GradeTooLowException();
	_isSigned = true;
}

std::ostream&	operator<<(std::ostream &os, Form& form)
{
	os << "Name: " << form.getName() << "\n"
		   << "Signed: " << (form.getSigned() == true ? "yes" : "no") << "\n"
		   << "Grade to sign: " << form.getGradeToSign() << "\n"
		   << "Grade to execute: " << form.getGradeToExecute() << "\n" 
		   << std::endl;
	return os;
}