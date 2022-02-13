/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:05:51 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/04 20:05:54 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Float.hpp"

Float::Float(void)
{
    return;
}

Float::Float(const Float& object): RealType(object.getLiteral())
{
    *this = object;
    return;
}

Float::Float(char* literal):    RealType(literal)
{
    _float = atof(getLiteral());
}

Float::Float(char c):   RealType(NULL, true)
{
    _float = static_cast<float>(c);
}

Float::Float(int int_value):    RealType(NULL, true)
{
    _float = static_cast<float>(int_value);
}

Float::Float(double double_value):  RealType(NULL)
{
    _float = static_cast<float>(double_value);
}

Float::Float(Pseudo pseudo):    RealType(pseudo)
{
    return;
}

Float::~Float(void)
{
    return;
}

float    Float::getFloat(void) const
{
    return _float;
}

Float&   Float::operator=(const Float& object)
{
    this->_float = object.getFloat();
    this->setSetPrecision(object.getSetPrecision());
    this->setPseudo(object.getPseudo());
    return *this;
}

std::ostream&   operator<<(std::ostream& output, const Float& object)
{
    if (object.isPseudo())
        output << object.getPseudo();
    else if (object.getSetPrecision())
        output << std::setprecision(1) << std::fixed << object.getFloat() << "f";
    else
        output << object.getFloat() << "f";
    return output;
}
