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

Float::Float(const Float& object): ScalarType(object.getLiteral())
{
    *this = object;
    return;
}

Float::Float(char* literal):    ScalarType(literal),
                                _set_precision(false)
{
    _float = atof(getLiteral());
}

Float::Float(char c):   ScalarType(NULL),
                        _set_precision(true)
{
    _float = static_cast<float>(c);
}

Float::Float(int int_value):    ScalarType(NULL),
                                _set_precision(true)
{
    _float = static_cast<float>(int_value);
}

Float::Float(double double_value):  ScalarType(NULL),
                                    _set_precision(false)
{
    _float = static_cast<float>(double_value);
}

Float::Float(Pseudo pseudo):    ScalarType(pseudo),
                                _set_precision(false)
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

bool    Float::getPrecision(void) const
{
    return _set_precision;
}

bool    Float::_willOverflow(long double value)
{
    (void)value;
    return false;
}

Float&   Float::operator=(const Float& object)
{
    this->_float = object.getFloat();
    this->_set_precision = object.getPrecision();
    this->setPseudo(object.getPseudo());
    return *this;
}

std::ostream&   operator<<(std::ostream& output, const Float& object)
{
    if (object.isPseudo())
        output << object.getPseudo();
    else if (object.getPrecision())
        output << std::setprecision(1) << std::fixed << object.getFloat() << "f";
    else
        output << object.getFloat() << "f";
    return output;
}
