/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:58:34 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/03 15:58:36 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Int.hpp"

Int::Int(void)
{
    return;
}

Int::Int(const Int& object): Scalar(object.getLiteral())
{
    *this = object;
    return;
}

Int::Int(char* literal):  Scalar(literal)
{
    _int = atoi(_literal);
}

Int::~Int(void)
{
    return;
}

int    Int::getInt(void) const
{
    return _int;
}

Int&   Int::operator=(const Int& object)
{
    this->_int = object.getInt();
    return *this;
}

std::ostream&   operator<<(std::ostream& output, const Int& object)
{
    output << object.getInt();        
    return output;
}
