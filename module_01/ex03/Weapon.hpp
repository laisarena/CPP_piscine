/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:16:39 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/13 22:52:34 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon {

private:
	std::string	_type;

public:
	Weapon( std::string type );
	~Weapon( void );
	
	void				setType ( std::string type );
	const std::string	&getType( void ) const;
};

#endif
