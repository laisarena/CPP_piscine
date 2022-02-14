/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:45:43 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/09 19:39:42 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	std::cout << std::endl << "------ CONSTRUCTOR -------" << std::endl;
	ClapTrap jorge("Jorge");
	ClapTrap marcia("Marcia");

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

	std::cout << std::endl << "------ DESTRUCTOR -------" << std::endl;
	return 0;
}
