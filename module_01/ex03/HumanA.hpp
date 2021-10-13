/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:33:51 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/12 20:36:47 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {

private:
	std::string	_name;
	Weapon		_weapon;

public:
	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );
	void	attack( void );
};

#endif
