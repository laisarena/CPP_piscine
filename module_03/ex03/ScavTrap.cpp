/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:15:46 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/07 18:33:45 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int const	ScavTrap::_initial_hitpoint = 100;
int const	ScavTrap::_initial_energy_point = 50;
int const	ScavTrap::_initial_attack_damage = 20;

ScavTrap::ScavTrap(void)
{
	initializeAttributes("Fulano");
}

ScavTrap::ScavTrap(std::string name)
{
	initializeAttributes(name);
}

void	ScavTrap::initializeAttributes(std::string name)
{
	this->_name = name;
	this->_hitpoints = _initial_hitpoint;
	this->_energy_points = _initial_energy_point;
	this->_attack_damage = _initial_attack_damage;

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
