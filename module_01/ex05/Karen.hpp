/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:03:27 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/14 00:32:33 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	KAREN_H
# define KAREN_H

# include <iostream>

class	Karen {

private:
	std::string	_level[4];
	void		(Karen::*_function[4])( void );
	
	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );

public:
	Karen( void );
	~Karen( void );

	void	complain( std::string level );
};

#endif
