/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:09:28 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/31 00:27:04 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->_name << ">  I died" << std::endl;
	return;
}
	
void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << ">  BraiiiiiiinnnzzzZ..." << std::endl;
}
