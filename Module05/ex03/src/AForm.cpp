#include "AForm.hpp"

AForm::AForm()
	: _name("Marco")
	, _isSigned(false)
	, _gradeToSign(0)
	, _gradeToExecute(0)
{}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute)
	: _name(name)
	, _isSigned(false)
	, _gradeToSign(gradeToSign)
	, _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE)
		throw AForm::GradeTooHighException();
	if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE)
		throw AForm::GradeTooLowException();
}
AForm::AForm(const AForm& frm)
	: _name(frm._name)
	, _isSigned(frm._isSigned)
	, _gradeToSign(frm._gradeToSign)
	, _gradeToExecute(frm._gradeToExecute)
{}

AForm::~AForm() {}

const std::string& AForm::getName() const
{
	return _name;
}

bool AForm::getSigned() const
{
	return _isSigned;
}

int AForm::getGradeToSign() const
{
	return this->_gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

void	AForm::beSigned(Bureaucrat& bureaucrat)
{
	if ( bureaucrat.getGrade() > _gradeToSign )
		throw AForm::GradeTooLowException();
	_isSigned = true;
}

std::ostream&	operator<<(std::ostream &os, AForm& form)
{
	os << "Name: " << form.getName() << "\n"
		   << "Signed: " << (form.getSigned() == true ? "yes" : "no") << "\n"
		   << "Grade to sign: " << form.getGradeToSign() << "\n"
		   << "Grade to execute: " << form.getGradeToExecute() << "\n" 
		   << std::endl;
	return os;
}