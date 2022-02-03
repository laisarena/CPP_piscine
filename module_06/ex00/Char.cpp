/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:16:59 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/03 15:17:01 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Char.hpp"

Char::Char(void)
{
    return;
}

Char::Char(const Char& object): Scalar(object.getLiteral())
{
    *this = object;
    return;
}

Char::Char(char* literal):  Scalar(literal)
{
    _char = *_literal;
}

Char::~Char(void)
{
    return;
}

char    Char::getChar(void) const
{
    return _char;
}

Char&   Char::operator=(const Char& object)
{
    this->_char = object.getChar();
    return *this;
}

std::ostream&   operator<<(std::ostream& output, const Char& object)
{
    output << object.getChar();        
    return output;
}
