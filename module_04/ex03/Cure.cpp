/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:17:31 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/04 21:21:51 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
}

AMateria	*Cure::clone() const
{
	AMateria *clone = new Cure();
	return clone;
}

void	Cure::use(ICharacter &target)
{
	std::cout	<< "* heals "
				<< target.getName()
				<< "’s wounds *"
				<< std::endl;
}
