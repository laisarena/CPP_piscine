/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:08:14 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/05 11:08:16 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Double.hpp"

Double::Double(void)
{
    return;
}

Double::Double(const Double& object): ScalarType(object.getLiteral())
{
    *this = object;
    return;
}

Double::Double(char* literal):  ScalarType(literal),
                                _set_precision(false)
{
    _double = atof(getLiteral());
}

Double::Double(char c): ScalarType(NULL),
                        _set_precision(true)
{
    _double = static_cast<double>(c);
}

Double::Double(int int_value):  ScalarType(NULL),
                                _set_precision(true)
{
    _double = static_cast<double>(int_value);
}

Double::Double(float float_value):  ScalarType(NULL),
                                    _set_precision(false)
{
    _double = static_cast<double>(float_value);
}

Double::Double(Pseudo pseudo):  ScalarType(pseudo),
                                _set_precision(false)
{
    return;
}

Double::~Double(void)
{
    return;
}

double    Double::getDouble(void) const
{
    return _double;
}

bool    Double::getPrecision(void) const
{
    return _set_precision;
}

bool    Double::_willOverflow(long double value)
{
    (void)value;
    return false;
}

Double&   Double::operator=(const Double& object)
{
    this->_double = object.getDouble();
    this->_set_precision = object.getPrecision();
    this->setImpossible(object.getImpossible());
    this->setPseudo(object.getPseudo());
    return *this;
}

std::ostream&   operator<<(std::ostream& output, const Double& object)
{
    if (object.getImpossible())
        output << "Impossible";
    else if (object.isPseudo())
        output << object.getPseudo();
    else if (object.getPrecision())
        output << std::setprecision(1) << std::fixed << object.getDouble();
    else
        output << object.getDouble();
    return output;
}