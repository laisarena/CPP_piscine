/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:20:32 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/20 22:50:55 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	this->name = "Fulano";
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name)
{
	this->name = name;
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->name = name;
	this->grade = grade;
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
	return this->name;
}

int			Bureaucrat::getGrade(void) const
{
	return this->grade;
}

void		Bureaucrat::incrementGrade(void)
{
	this->grade--;

}

void		Bureaucrat::decrementGrade(void)
{
	this->grade++;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& right_side_object)
{
	this->name = right_side_object.name;
	this->grade = right_side_object.grade;
	return *this;
}

std::ostream& operator<<(std::ostream &output, const Bureaucrat& right_side_object)
{
	output << right_side_object.getName()
				<< " bureaucrat grade "
				<< right_side_object.getGrade();
	return output;
}
