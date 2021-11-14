/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:45:43 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/14 20:27:43 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{

	std::cout << std::endl << "------ CONSTRUCTOR -------" << std::endl;
	ScavTrap jorge("Jorge");
	ScavTrap marcia("Marcia");

	std::cout << std::endl << "------ PRINT -------" << std::endl;
	std::cout << jorge;
	std::cout << marcia;

	std::cout << std::endl << "------ ATTACK -------" << std::endl;
	jorge.attack(marcia.getName());
	marcia.takeDamage(jorge.getAttackDamage());

	std::cout << std::endl << "------ PRINT -------" << std::endl;
	std::cout << jorge;
	std::cout << marcia;

	std::cout << std::endl << "------ REPAIR -------" << std::endl;
	jorge.beRepaired(10);

	std::cout << std::endl << "------ PRINT -------" << std::endl;
	std::cout << jorge;
	std::cout << marcia;

	std::cout << std::endl << "------ GUARD GATE -------" << std::endl;
	marcia.guardGate();

	std::cout << std::endl << "------ DESTRUCTOR -------" << std::endl;
	return 0;
}
