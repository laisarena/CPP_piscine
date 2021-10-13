/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:34:48 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/11 20:59:17 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {

private:
	std::string	_name;
	Weapon		_weapon;

public:
	HumanB( std::string name );
	~HumanB( void );
	void	attack( void );
	void	setWeapon( Weapon weapon );
};

#endif
