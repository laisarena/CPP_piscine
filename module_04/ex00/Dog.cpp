/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:22:07 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/15 18:21:46 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout	<< "Constructed "
				<< this->_type
				<< std::endl;
}

Dog::Dog(Dog const &object)
{
	*this = object;
	std::cout	<< "Constructed Dog with copy" << std::endl;
}

Dog::~Dog(void) {
	std::cout	<< "Destroyed Dog" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "* WOOF WOOF *" << std::endl;
}
