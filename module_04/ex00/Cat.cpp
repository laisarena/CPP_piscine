/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:29:01 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/15 18:22:31 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout	<< "Constructed "
				<< this->_type
				<< std::endl;
}

Cat::Cat(Cat const &object)
{
	*this = object;
	std::cout	<< "Constructed Cat with copy" << std::endl;
}

Cat::~Cat(void) {
	std::cout	<< "Destroyed Cat" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "* MEOW MEOW *" << std::endl;
}
