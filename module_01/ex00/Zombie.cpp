/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:09:28 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/11 11:02:09 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
