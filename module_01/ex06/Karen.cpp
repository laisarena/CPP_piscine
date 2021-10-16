/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:03:11 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/14 00:31:23 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ) {
	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";
	this->_function[0] = &Karen::debug;
	this->_function[1] = &Karen::info;
	this->_function[2] = &Karen::warning;
	this->_function[3] = &Karen::error;

	return ;
}

Karen::~Karen( void ) {
	return ;
}

void	Karen::complain( std::string level ) {
	int	i = 0;

	while( i < 4 && level.compare(this->_level[i]) )
		i++;
	if ( i < 4 )
		(this->*_function[i])();
	return ;
}

void	Karen::debug( void ) {
	std::cout << "I love to get extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I just love it!"
		<< std::endl;
}

void	Karen::info( void ) {
	std::cout << "I cannot believe adding extra bacon cost more money. "
		<< "You don’t put enough! If you did I would not have to ask for it!"
		<< std::endl;
}

void	Karen::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming here for years and you just started "
		<< "working here last month."
		<< std::endl;
}

void	Karen::error( void ) {
	std::cout << "This is unacceptable, I want to speak to the manager now." 
		<< std::endl;
}
