/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:20:13 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/11 19:05:04 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static void	setZombie( Zombie *zombie, std::string name ) {
	zombie->setName( name );
	zombie->announce();
}

Zombie* zombieHorde( int N, std::string name ) {
	Zombie	*zombieHorde = new Zombie[N];
	for ( int i = 0; i < N; i++ )
		setZombie( &zombieHorde[i], name );
	return (zombieHorde);
}
