/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:48:49 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/31 00:19:54 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

static void	announceHorde(int N, Zombie *horde)
{
	for (int i = 0; i < N; i++)
		horde->announce();
}

int	main(void)
{
	Zombie	*horde;

	horde = zombieHorde( 3, "Carlos" );
	announceHorde(3, horde);
	delete [] horde;

	horde = zombieHorde( 5, "Maria" );
	announceHorde(5, horde);
	delete [] horde;

	return 0;
}
