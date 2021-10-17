/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arguments.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:37:59 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/14 00:35:22 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGUMENTS_H
# define ARGUMENTS_H

# include <iostream>

class	Arguments {

private:
	char		*_inputName;
	std::string	_string1;
	char		*_string2;
	std::string	_outputName;
	void		_setOutputName( void );

public:
	Arguments( char *inputName, char *string1, char *string2);
	~Arguments( void );

	char		*getInputName( void ) const;
	char		*getOutputName( void ) const;
	std::string	getString1( void ) const;
	char		*getString2( void ) const;
};

#endif
