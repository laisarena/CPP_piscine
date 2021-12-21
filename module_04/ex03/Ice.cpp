/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:06:23 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/21 22:52:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void):	AMateria("ice")
{
	return;
}

Ice::Ice(const Ice& object)
{
	*this = object;
}

Ice::~Ice(void)
{
	return;
}

AMateria*	Ice::clone() const
{
	return new Ice();
}

void	Ice::use(ICharacter &target)
{
	std::cout	<< "* shoots an ice bolt at "
				<< target.getName()
				<< " *"
				<< std::endl;
}

Ice&	Ice::operator=(Ice const &right_side_object)
{
	this->_type = right_side_object.getType();
	return *this;
}
