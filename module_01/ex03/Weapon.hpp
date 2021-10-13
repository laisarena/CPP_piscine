/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:16:39 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/12 20:45:39 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon {

private:
	std::string	_type;

public:
	Weapon( void );
	Weapon( std::string type );
	~Weapon( void );
	void		setType ( std::string type );
	std::string	const &getType( void );
};

#endif
