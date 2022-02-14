/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:41:48 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/29 01:48:01 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):
	Form("RobotomyRequestForm", 72, 45),
	_target("Default")
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("RobotomyRequestForm", 72, 45),
	_target(target)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& object)
{
	*this = object; 
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}

void		RobotomyRequestForm::_action(void) const
{
	int success;

	srand (time(NULL));
	success = rand() % 2;

	std::cout << std::endl
		<< "*****************************************************" << std::endl;
	std::cout << "rizzzzzzz!!!! rizzz!! rizzzzzzzzzzz!!" << std::endl;
	if (success)
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Unexpected failure during robotization of "
			<< this->_target << "." << std::endl;
	std::cout << "*****************************************************" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& object)
{
	this->_target = object._target;
	return *this;
}
