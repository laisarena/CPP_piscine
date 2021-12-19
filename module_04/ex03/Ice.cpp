/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:06:23 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/18 18:17:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
}

Ice::~Ice(void)
{
	return;
}

AMateria	*Ice::clone() const
{
	AMateria *clone = new Ice();
	return clone;
}

void	Ice::use(ICharacter &target)
{
	std::cout	<< "* shoots an ice bolt at "
				<< target.getName()
				<< " *"
				<< std::endl;
}
