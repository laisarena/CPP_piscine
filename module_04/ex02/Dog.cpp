/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:22:07 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/18 20:13:13 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->brain = new Brain();
	this->_type = "Dog";
	std::cout	<< "Constructed "
				<< this->_type
				<< std::endl;
}

Dog::Dog(Dog const &object)
{
	*this = object;
	this->brain = new Brain(*this->brain);
	std::cout	<< "Constructed deep Dog" << std::endl;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout	<< "Destroyed Dog" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "* WOOF WOOF *" << std::endl;
}
