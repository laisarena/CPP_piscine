/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:07:53 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/08 09:09:34 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	initializeAttributes("Fulano");
}

DiamondTrap::DiamondTrap(std::string name)
{
	initializeAttributes(name);
}

void	DiamondTrap::initializeAttributes(std::string name)
{
	this->_name = name;
	ClapTrap::_name = name.append("_clap_name");
	this->_hitpoints = FragTrap::_initial_hitpoint;
	this->_energy_points = ScavTrap::_initial_energy_point;
	this->_attack_damage = FragTrap::_initial_attack_damage;

	std::cout	<< "DiamondTrap "
				<< this->_name
				<< " was created with "
				<< this->_hitpoints
				<< " hitpoints and your attack damage is "
				<< this->_attack_damage
				<< "."
				<< std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout	<< "DiamondTrap "
				<< this->_name
				<< " was destroyed."
				<< std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout	<< "DiamondTrap name: "
				<< this->_name
				<< " | ClapTrap name: "
				<< ClapTrap::_name
				<< std::endl;
}
