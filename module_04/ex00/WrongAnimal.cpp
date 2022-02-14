/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:36:09 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/18 18:35:07 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->_type = "WrongAnimal";
	std::cout	<< "Constructed "
				<< this->_type
				<< std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &object)
{
	*this = object;
	std::cout	<< "Constructed WrongAnimal with copy" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout	<< "Destroyed WrongAnimal" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &right_side_object)
{
	this->_type = right_side_object.getType();
	return *this;
}

std::ostream & operator<<(std::ostream &output, WrongAnimal const &rightSideObject)
{
	output	<< "WrongAnimal type:"
			<< rightSideObject.getType()
			<< std::endl;
	return output;
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "* ANIMAL SOUND *" << std::endl;
}
