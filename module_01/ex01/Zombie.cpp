/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:09:28 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/11 19:02:19 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	return ;
}


Zombie::Zombie( std::string name ) : _name( name ) {
	return ;
}

Zombie::~Zombie( void ) {
	std::cout << "<" << this->_name << ">  I died" << std::endl;
	return ;
}
	
void	Zombie::announce( void ) {
	std::cout << "<" << this->_name << ">  BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name ) {
	this->_name = name;
}
