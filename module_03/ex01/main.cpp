/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:45:43 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/03 15:36:08 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap jorge("Jorge");
	ScavTrap marcia("Marcia");

	jorge.attack(marcia.getName());
	marcia.takeDamage(jorge.getAttackDamage());
	std::cout << jorge;
	std::cout << marcia;
	jorge.beRepaired(10);
	std::cout << jorge;
	std::cout << marcia;
	return 0;
}
