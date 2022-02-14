/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:29:01 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/18 18:54:44 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout	<< "Constructed "
				<< this->_type
				<< std::endl;
}

WrongCat::WrongCat(WrongCat const &object)
{
	*this = object;
	std::cout	<< "Constructed WrongCat with copy" << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout	<< "Destroyed WrongCat" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "* MEOW MEOW *" << std::endl;
}
