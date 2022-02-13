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

Int::Int(void): IntegerType()
{
    return;
}

Int::Int(const Int& object): IntegerType(object.getLiteral())
{
    *this = object;
    return;
}

Int::Int(char* literal):  IntegerType(literal)
{
    if (_willOverflow(atol(getLiteral())))
        setImpossible(true);
    _int = atoi(getLiteral());
}

Int::Int(unsigned char c)
{
    _int = static_cast<int>(c);
}

Int::Int(float float_value)
{
    if (_willOverflow(float_value))
        setImpossible(true);
    _int = static_cast<int>(float_value);
}

Int::Int(double double_value)
{
    if (_willOverflow(double_value))
        setImpossible(true);
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
    this->_int = object.getInt();
    this->setImpossible(object.getImpossible());
    return *this;
}

std::ostream&   operator<<(std::ostream& output, const Int& object)
{
    if (object.getImpossible())
        output << "Impossible";
    else
        output << object.getInt();        
    return output;
}
