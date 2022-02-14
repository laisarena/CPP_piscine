/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:17:31 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/22 00:00:04 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	return;
}

Cure::Cure(const Cure& object)
{
	*this = object;
}

Cure::~Cure(void)
{
	return;
}

AMateria*	Cure::clone() const
{
	return new Cure();
}

void	Cure::use(ICharacter &target)
{
	std::cout	<< "* heals "
				<< target.getName()
				<< "’s wounds *"
				<< std::endl;
}

Cure&	Cure::operator=(Cure const &right_side_object)
{
	this->_type = right_side_object.getType();
	return *this;
}
