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

Float::Float(const Float& object): Scalar(object.getLiteral())
{
    *this = object;
    return;
}

Float::Float(char* literal):    Scalar(literal),
                                _set_precision(false)
{
    _float = atof(getLiteral());
}

Float::Float(char c):   Scalar(NULL),
                        _set_precision(true)
{
    _float = static_cast<float>(c);
}

Float::Float(int int_value):    Scalar(NULL),
                                _set_precision(true)
{
    _float = static_cast<float>(int_value);
}

Float::Float(double double_value):  Scalar(NULL),
                                    _set_precision(false)
{
    _float = static_cast<float>(double_value);
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
    if (value > INT_MAX)
        return true;
    if (value < INT_MIN)
        return true;
    return false;
}

Float&   Float::operator=(const Float& object)
{
    if (object.getImpossible())
        this->setImpossible();
    this->_float = object.getFloat();
    this->_set_precision = object.getPrecision();
    return *this;
}

std::ostream&   operator<<(std::ostream& output, const Float& object)
{
    if (object.getImpossible())
    {
        output << "Impossible";
        return output;
    }
    if (object.getPrecision())
        output << std::setprecision(1) << std::fixed << object.getFloat() << "f";
    else
        output << object.getFloat() << "f";
    return output;
}
