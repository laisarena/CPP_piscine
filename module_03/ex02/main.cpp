/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:51:41 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/03 19:52:37 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap jorge("Jorge");
	FragTrap marcia("Marcia");

	jorge.attack(marcia.getName());
	marcia.takeDamage(jorge.getAttackDamage());
	std::cout << jorge;
	std::cout << marcia;
	jorge.beRepaired(10);
	std::cout << jorge;
	std::cout << marcia;
	marcia.highFivesGuys();

	return 0;
}
