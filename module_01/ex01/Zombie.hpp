/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:09:14 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/11 19:04:08 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie {

private:
	std::string	_name;

public:
	Zombie( void );
	Zombie( std::string );
	~Zombie( void );
	
	void	announce( void );
	void	setName( std::string name );
};

#endif
