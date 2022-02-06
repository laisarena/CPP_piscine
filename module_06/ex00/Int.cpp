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
    _int = atoi(getLiteral());
}

Int::Int(unsigned char c)
{
    _int = static_cast<int>(c);
}

Int::Int(float float_value)
{
    _int = static_cast<int>(float_value);
}

Int::Int(double double_value)
{
    _int = static_cast<int>(double_value);
}

Int::~Int(void)
{
    return;
}

int    Int::getInt(void) const
{
    return _int;
}

bool    Int::_willOverflow(long double value)
{
    if (value > INT_MAX)
        return true;
    if (value < INT_MIN)
        return true;
    return false;
}

Int&   Int::operator=(const Int& object)
{
    this->setImpossible(object.getImpossible());
    this->_int = object.getInt();
    return *this;
}

std::ostream&   operator<<(std::ostream& output, const Int& object)
{
    if (object.getImpossible())
        output << "Impossible";
    output << object.getInt();        
    return output;
}
