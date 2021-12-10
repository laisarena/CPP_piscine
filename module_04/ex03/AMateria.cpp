/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:09:05 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/08 20:43:58 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout	<< "DEBUG: "
				<< "AMateria default constructor"
				<< std::endl;
	this->_type = "none";
}
		
AMateria::AMateria(std::string const &type)
{
	std::cout	<< "DEBUG: "
				<< "AMateria typed constructor -> "
				<< type
				<< std::endl;
	this->_type = type;
}
		
AMateria::AMateria(AMateria &object)
{
	std::cout	<< "DEBUG: "
				<< "AMateria copy constructor"
				<< std::endl;
	*this = object;
}

AMateria::~AMateria(void)
{
	std::cout	<< "DEBUG: "
				<< "AMateria destructor"
				<< std::endl;
	return;
}

AMateria	&AMateria::operator=(AMateria const &right_side_object)
{
	this->_type = right_side_object.getType();
	return *this;
}

std::string const	&AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter &target)
{
	std::cout	<< "Materia "
				<< this->_type
				<< " used on " 
				<< target.getName()
				<< std::endl;
}
