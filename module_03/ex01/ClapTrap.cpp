/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:48:03 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/09 20:59:10 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	_initializeAttributes("Fulano");
}

ClapTrap::ClapTrap(std::string name)
{
	_initializeAttributes(name);
}

void	ClapTrap::_initializeAttributes(std::string name)
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;

	std::cout	<< "ClapTrap "
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

ClapTrap::ClapTrap(ClapTrap const &object)
{
	*this = object;
}

ClapTrap::~ClapTrap(void) {
	std::cout	<< "ClapTrap "
				<< this->_name
				<< " was destroyed."
				<< std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &right_side_object)
{
	this->_name = right_side_object.getName();
	this->_hitpoints = right_side_object.getHitpoints();
	this->_energy_points = right_side_object.getEnergyPoints();
	this->_attack_damage = right_side_object.getAttackDamage();
	return *this;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout	<< "ClapTrap "
				<< this->_name
				<< " attack "
				<< target
				<< ", causing "
				<< this->_attack_damage
				<< " points of damage!"
				<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitpoints -= amount;
	if (this->_hitpoints < 0)
		this->_hitpoints = 0;
	std::cout	<< "ClapTrap "
				<< this->_name
				<< " take "
				<< amount
				<< " points of damage, resulting in "
				<< this->_hitpoints
				<< " hitpoints."
				<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	std::cout	<< "ClapTrap "
				<< this->_name
				<< " was repaired with "
				<< amount
				<< " points." << std::endl;
}

std::ostream & operator<<(std::ostream &output, ClapTrap const &rightSideObject)
{
	output	<< "ClapTrap: "
			<< rightSideObject.getName()
			<< " -> "
			<< "Hitpoits: "
			<< rightSideObject.getHitpoints()
			<< std::endl;
	return output;
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitpoints(int hitpoints)
{
	this->_hitpoints = hitpoints;
}

void	ClapTrap::setEnengyPoints(int energy_points)
{
	this->_energy_points = energy_points;
}

void	ClapTrap::setAttackDamage(int attack_damage)
{
	this->_attack_damage = attack_damage;
}

std::string	ClapTrap::getName(void) const
{
	return this->_name;
}

int	ClapTrap::getHitpoints(void) const
{
	return this->_hitpoints;
}

int	ClapTrap::getEnergyPoints(void) const
{
	return this->_energy_points;
}

int	ClapTrap::getAttackDamage(void) const
{
	return this->_attack_damage;
}
