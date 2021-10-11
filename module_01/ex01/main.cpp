/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:48:49 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/11 18:26:24 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int		main( void ) {
	Zombie	*horde;

	horde = zombieHorde( 3, "Carlos" );
	delete [] horde;
	return ( 0 );
}
