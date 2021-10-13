/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:16:17 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/13 22:52:37 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type( type ) {
	return ;
}

Weapon::~Weapon( void ) {
	return ;
}

void				Weapon::setType ( std::string type ) {
	this->_type = type;
}

const std::string	&Weapon::getType( void ) const {
	return this->_type; 
}
