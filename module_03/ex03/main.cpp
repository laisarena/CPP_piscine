/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:53:56 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/08 21:50:21 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main(void)
{
	std::cout << "------ CONSTRUCTOR -------" << std::endl;
	DiamondTrap *jorge = new DiamondTrap("Jorge");
	std::cout << std::endl;
	DiamondTrap marcia("Marcia");
	std::cout << std::endl;
	DiamondTrap copiaDaMarcia;
	std::cout << std::endl;
	copiaDaMarcia = marcia;
	DiamondTrap copiaDoJorge(*jorge);

	std::cout << "------ PRINT -------" << std::endl;
	std::cout << *jorge;
	std::cout << marcia;
	std::cout << copiaDoJorge;
	std::cout << copiaDaMarcia;
	std::cout << std::endl;

	std::cout << "------ WHO AM I -------" << std::endl;
	jorge->whoAmI();
	copiaDoJorge.whoAmI();
	std::cout << std::endl;

	std::cout << "------ ATTACK -------" << std::endl;
	jorge->attack(marcia.getName());
	marcia.takeDamage(jorge->getAttackDamage());
	std::cout << std::endl;

	std::cout << "------ REPAIR -------" << std::endl;
	jorge->beRepaired(10);
	std::cout << std::endl;

	std::cout << "------ PRINT -------" << std::endl;
	std::cout << jorge;
	std::cout << marcia;
	std::cout << copiaDoJorge;
	std::cout << copiaDaMarcia;
	std::cout << std::endl;

	std::cout << "------ GUARD GATE -------" << std::endl;
	marcia.guardGate();
	std::cout << std::endl;

	std::cout << "------ HIGH FIVE -------" << std::endl;
	marcia.highFivesGuys();
	std::cout << std::endl;

	delete jorge;

	std::cout << "------ WHO AM I -------" << std::endl;
	copiaDoJorge.whoAmI();
	std::cout << std::endl;

	std::cout << "------ DESTRUCTOR -------" << std::endl;
	return 0;
}
