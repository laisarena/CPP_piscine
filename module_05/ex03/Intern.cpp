/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:05:21 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/28 20:31:42 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#define SIZE	3

Intern::Intern(void)
{
	_defineFormNames();
	_defineFormFunctions();
	return;
}

Intern::Intern(const Intern& object)
{
	*this = object; 
}

Intern::~Intern(void)
{
	delete[] _form_names;
	delete[] _make_form;
	return;
}

void	Intern::_defineFormNames(void)
{
	this->_form_names = new std::string[SIZE];

	this->_form_names[0] = "shrubbery creation";
	this->_form_names[1] = "robotomy request";
	this->_form_names[2] =	"presidential pardon";
}

void	Intern::_defineFormFunctions(void)
{
	this->_make_form = new (Form* (Intern::*[SIZE])(std::string));

	this->_make_form[0] = &Intern::_makeFormShrubberyCreation;
	this->_make_form[1] = &Intern::_makeFormRobotomyRequest;
	this->_make_form[2] = &Intern::_makeFormPresidentialPardon;
	
	return;
}

static bool	invalidName(int index, std::string name)
{
	if (index != SIZE)
		return false;
	std::cout << "The form \"" << name << "\" not exist."
			<< std::endl;
	return true;
}

int	Intern::_getFormIndex(std::string name)
{
	for (int i = 0; i < SIZE; i++)
		if (name == this->_form_names[i])
			return i;
	return SIZE;
}

Form*	Intern::makeForm(std::string form_name, std::string target)
{
	int index = _getFormIndex(form_name);
	if (invalidName(index, form_name))
		return NULL;
	return (this->*_make_form[index])(target);
}

Form*	Intern::_makeFormShrubberyCreation(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form*	Intern::_makeFormRobotomyRequest(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form*	Intern::_makeFormPresidentialPardon(std::string target)
{
	return new PresidentialPardonForm(target);
}

Intern&	Intern::operator=(const Intern& object)
{
	for (int i = 0; i < SIZE; i++)
	{
		this->_form_names[i] = object._form_names[i];
		this->_make_form[i] = object._make_form[i];
	}
	return *this;
}
