/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:20:32 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/09 19:23:12 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):	_name("Fulano"),
								_grade(150)
{
	return;
}

Bureaucrat::Bureaucrat(std::string name):	_name(name),
											_grade(150)
{
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade):	_name(name),
														_grade(grade)
{
	_checkGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat& right_side_object)
{
	*this = right_side_object;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

std::string	Bureaucrat::getName(void) const
{
	return this->_name;
}

int			Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void		Bureaucrat::incrementGrade(void)
{
	this->_grade--;
	_checkGrade();
}

void		Bureaucrat::decrementGrade(void)
{
	this->_grade++;
	_checkGrade();
}

void	Bureaucrat::signForm(Form form)
{
	if (form.getSigned())
		std::cout << this->_name << " signs " << form.getName()
			<< "." << std::endl;
	else
		std::cout << this->_name << " cannot sign " << form.getName()
			<< " because " <<  "." << std::endl;

}

void	Bureaucrat::_checkGrade(void)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& right_side_object)
{
	this->_name = right_side_object._name;
	this->_grade = right_side_object._grade;
	return *this;
}

std::ostream& operator<<(std::ostream &output, const Bureaucrat& right_side_object)
{
	output << right_side_object.getName()
				<< " bureaucrat grade "
				<< right_side_object.getGrade();
	return output;
}