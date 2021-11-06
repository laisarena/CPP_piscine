/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:53:56 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/04 17:46:47 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main(void)
{
	std::cout << "------ CONSTRUCTOR -------" << std::endl;
	DiamondTrap jorge("Jorge");
	std::cout << std::endl;
	DiamondTrap marcia("Marcia");
	std::cout << std::endl;
	
	std::cout << "------ ATTACK -------" << std::endl;
	jorge.attack(marcia.getName());
	marcia.takeDamage(jorge.getAttackDamage());
	std::cout << std::endl;

	std::cout << "------ PRINT -------" << std::endl;
	std::cout << jorge;
	std::cout << marcia;
	std::cout << std::endl;
	
	jorge.beRepaired(10);
	std::cout << "------ PRINT -------" << std::endl;
	std::cout << jorge;
	std::cout << marcia;
	std::cout << std::endl;
	

	std::cout << "------ HIGH FIVE -------" << std::endl;
	marcia.highFivesGuys();
	std::cout << std::endl;

	std::cout << "------ WHO AM I -------" << std::endl;
	jorge.whoAmI();
	std::cout << std::endl;

	std::cout << "------ DESTRUCTOR -------" << std::endl;
	return 0;
}
