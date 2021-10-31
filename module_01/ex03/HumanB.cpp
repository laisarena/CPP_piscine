/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:34:10 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/31 01:01:40 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :	_name(name),
									_weapon(NULL)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (this->_weapon)
		std::cout << this->_name
			<< " attacks with his "
			<< this->_weapon->getType();
	else
		std::cout << this->_name << " has no weapons to attack";
	std::cout << std::endl;
}
