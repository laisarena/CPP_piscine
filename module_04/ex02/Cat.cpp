/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:29:01 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/06 21:28:23 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->brain = new Brain();
	this->_type = "Cat";
	std::cout	<< "Constructed "
				<< this->_type
				<< std::endl;
}

Cat::Cat(Cat const &object)
{
	*this = object;
	std::cout	<< "Constructed deep Cat" << std::endl;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout	<< "Destroyed Cat" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return this->brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "* MEOW MEOW *" << std::endl;
}

Cat	&Cat::operator=(Cat const &right_side_object)
{
	this->_type = right_side_object.getType();
	this->brain = new Brain(*right_side_object.getBrain());
	return *this;
 }
