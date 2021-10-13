/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arguments.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:37:25 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/13 19:08:03 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Arguments.hpp"

Arguments::Arguments( char *inputName,
					char *string1,
					char *string2) :
					_inputName( inputName ),
					_string1( string1 ),
					_string2( string2 ) {
	_setOutputName();
	return ;
}

Arguments::~Arguments( void ) {
	return ;
}

#include <string>

void	Arguments::_setOutputName( void )    {
	this->_outputName = this->_inputName;
	this->_outputName.append(".replace");
}

char	*Arguments::getInputName( void ) const    {
	return this->_inputName;
}

char	*Arguments::getOutputName( void ) const    {
	return (char *)this->_outputName.c_str();
}

char	*Arguments::getString1( void ) const    {
	return this->_string1;
}

char	*Arguments::getString2( void ) const {
	return this->_string2;
}

