/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:51:41 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/14 20:34:12 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	std::cout << std::endl << "------ CONSTRUCTOR -------" << std::endl;
	FragTrap jorge("Jorge");
	FragTrap marcia("Marcia");

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

	std::cout << std::endl  << "------ HIGH FIVE -------" << std::endl;
	marcia.highFivesGuys();

	std::cout << std::endl << "------ DESTRUCTOR -------" << std::endl;
	return 0;
}
