/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:15:46 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/03 15:46:32 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):	_name(name),
										_hitpoints(100),
										_energy_points(50),
										_attack_damage(20)
{
	std::cout << "ScavTrap " << this->_name;
	std::cout << " was created with " << this->_hitpoints;
	std::cout << " hitpoints and your attack damage is ";
	std::cout << this->_attack_damage << "." << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->_name;
	std::cout << " was destroyed." << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->_name << " attack " << target
				<< ", causing " << this->_attack_damage
				<< " points of damage!" << std::endl;
}
