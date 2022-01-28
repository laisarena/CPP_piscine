/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:56:49 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/19 10:52:45 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void):	_name("Default"),
					_grade_to_sign(1),
					_grade_to_execute(1),
					_signed(false)
{
	return;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute):
									_name(name),
									_grade_to_sign(grade_to_sign),
									_grade_to_execute(grade_to_execute),
									_signed(false)
{
	_checkGrade(this->_grade_to_sign);
	_checkGrade(this->_grade_to_execute);
}

Form::Form(const Form& right_side_object):
	_name(right_side_object._name),
	_grade_to_sign(right_side_object._grade_to_sign),
	_grade_to_execute(right_side_object._grade_to_execute)
{
	*this = right_side_object;
}

Form::~Form(void)
{
	return;
}

std::string	Form::getName(void) const
{
	return this->_name;
}

int			Form::getGradeToSign(void) const
{
	return this->_grade_to_sign;
}

int			Form::getGradeToExecute(void) const
{
	return this->_grade_to_execute;
}

int			Form::getSigned(void) const
{
	return this->_signed;
}

void		Form::beSigned(Bureaucrat bureaucrat)
{
	if (this->_signed)
		throw Form::AlreadySignedException();
	if (bureaucrat.getGrade() > this->_grade_to_sign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

void		Form::execute(Bureaucrat& executor) const
{
	if (this->getSigned() == false)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	_action();
}
		
void	Form::_checkGrade(const int& grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();
}

Form&	Form::operator=(const Form& right_side_object)
{
	this->_signed = right_side_object._signed;
	return *this;
}

std::ostream& operator<<(std::ostream &output, const Form& right_side_object)
{
	output << "The form \""
			<< right_side_object.getName()
			<< "\" ";
	if (right_side_object.getSigned())
		output << "is signed.";
	else
		output << "is not signed.";
	return output;
}
