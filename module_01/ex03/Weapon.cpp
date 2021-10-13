/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:16:17 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/12 20:45:59 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) {
	return ;
}

Weapon::Weapon( std::string type ) : _type( type ) {
	return ;
}

Weapon::~Weapon( void ) {
	return ;
}

void		Weapon::setType ( std::string type ) {
	this->_type = type;
}

std::string const	&Weapon::getType( void ) {
	return ( this->_type );
}
