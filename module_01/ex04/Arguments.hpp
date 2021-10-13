/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arguments.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:37:59 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/13 19:08:26 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Arguments {

private:
	char		*_inputName;
	char		*_string1;
	char		*_string2;
	std::string	_outputName;
	void		_setOutputName( void );

public:
	Arguments( char *inputName, char *string1, char *string2);
	~Arguments( void );

	char	*getInputName( void ) const;
	char	*getOutputName( void ) const;
	char	*getString1( void ) const;
	char	*getString2( void ) const;
};
