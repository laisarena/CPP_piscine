/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:34:10 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/11 20:59:07 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name( name ) {
	return ;
}

HumanB::~HumanB( void ) {
	return ;
}

void	HumanB::setWeapon( Weapon weapon ) {
	this->_weapon = weapon;
}

void	HumanB::attack( void ) {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType();
	std::cout << std::endl;
}
