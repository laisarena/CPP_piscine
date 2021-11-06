/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:30:05 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/03 19:36:08 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_name = "Fulano";
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	std::cout	<< "FragTrap "
				<< this->_name
				<< " was created with "
				<< this->_hitpoints
				<< " hitpoints and your attack damage is "
				<< this->_attack_damage
				<< "."
				<< std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	std::cout	<< "FragTrap "
				<< this->_name
				<< " was created with "
				<< this->_hitpoints
				<< " hitpoints and your attack damage is "
				<< this->_attack_damage
				
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
