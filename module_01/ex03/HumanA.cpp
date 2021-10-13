/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:16:27 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/12 20:36:14 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) :	_name( name ),
														_weapon( weapon ) {
	return ;
}

HumanA::~HumanA( void ) {
	return ;
}

void	HumanA::attack( void ) {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType();
	std::cout << std::endl;
}
