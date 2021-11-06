/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:07:53 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/04 18:07:07 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->_name = "Fulano";
	//ClapTrap::_name = this->_name.append("_clap_name");
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;

	std::cout	<< "DiamondTrap "
				<< this->_name
				<< " was created with "
				<< this->_hitpoints
				<< " hitpoints and your attack damage is "
				<< this->_attack_damage
				<< "."
				<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	//ClapTrap::_name = name.append("_clap_name");
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;

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
	std::cout	<< "DiamondTrap "
				<< this->_name
				<< std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}
