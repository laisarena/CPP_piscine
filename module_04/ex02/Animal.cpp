/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:36:09 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/21 18:07:32 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->_type = "Animal";
	std::cout	<< "Constructed "
				<< this->_type
				<< std::endl;
}

Animal::Animal(Animal const &object)
{
	*this = object;
	std::cout	<< "Constructed Animal with copy" << std::endl;
}

Animal::~Animal(void) {
	std::cout	<< "Destroyed Animal" << std::endl;
}

Animal	&Animal::operator=(Animal const &right_side_object)
{
	this->_type = right_side_object.getType();
	return *this;
}

std::ostream & operator<<(std::ostream &output, Animal const &rightSideObject)
{
	output	<< "Animal type:"
			<< rightSideObject.getType()
			<< std::endl;
	return output;
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}
