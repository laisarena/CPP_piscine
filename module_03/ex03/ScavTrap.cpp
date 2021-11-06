/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:15:46 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/03 19:01:09 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "Fulano";
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	std::cout	<< "ScavTrap "
				<< this->_name
				<< " was created with "
				<< this->_hitpoints
				<< " hitpoints and your attack damage is "
				<< this->_attack_damage
				<< "."
				<< std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	std::cout	<< "ScavTrap "
				<< this->_name
				<< " was created with "
				<< this->_hitpoints
				<< " hitpoints and your attack damage is "
				<< this->_attack_damage
				<< "."
				<< std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout	<< "ScavTrap "
				<< this->_name
				<< " was destroyed."
				<< std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout	<< "ScavTrap "
				<< this->_name
				<< " attack "
				<< target
				<< ", causing "
				<< this->_attack_damage
				<< " points of damage!"
				<< std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout	<< "ScavTrap "
				<< this->_name
				<< " have enterred in Gate keeper mode."
				<< std::endl;
}
