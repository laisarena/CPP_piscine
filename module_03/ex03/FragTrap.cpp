/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:30:05 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/15 11:35:46 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int const	FragTrap::_initial_hitpoint = 100;
int const	FragTrap::_initial_energy_point = 100;
int const	FragTrap::_initial_attack_damage = 30;

FragTrap::FragTrap(void)
{
	_initializeAttributes("Fulano");
}

FragTrap::FragTrap(std::string name)
{
	_initializeAttributes(name);
}

void	FragTrap::_initializeAttributes(std::string name)
{
	this->_name = name;
	this->_hitpoints = _initial_hitpoint;
	this->_energy_points = _initial_energy_point;
	this->_attack_damage = _initial_attack_damage;

	std::cout	<< "FragTrap "
				<< this->_name
				<< " was created with "
				<< this->_hitpoints
				<< " hitpoints, "
				<< this->_energy_points
				<< " energy points and your attack damage is "
				<< this->_attack_damage
				<< "."
				<< std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout	<< "FragTrap "
				<< this->_name
				<< " was destroyed."
				<< std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	std::cout	<< "FragTrap "
				<< this->_name
				<< " attack "
				<< target
				<< ", causing "
				<< this->_attack_damage
				<< " points of damage!"
				<< std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout	<< "FragTrap "
				<< this->_name
				<< " want a high five."
				<< std::endl;
}
