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

Double::Double(const Double& object): RealType(object.getLiteral())
{
    *this = object;
    return;
}

Double::Double(char* literal):  RealType(literal)
{
    _double = atof(getLiteral());
    _checkPrecision(_double);
}

Double::Double(char c): RealType(NULL, true)
{
    _double = static_cast<double>(c);
}

Double::Double(int int_value):  RealType(NULL, true)
{
    _double = static_cast<double>(int_value);
}

Double::Double(float float_value):  RealType(NULL)
{
    _double = static_cast<double>(float_value);
    _checkPrecision(_double);
}

Double::Double(Pseudo pseudo):  RealType(pseudo)
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

Double&   Double::operator=(const Double& object)
{
    this->_double = object.getDouble();
    this->setSetPrecision(object.getSetPrecision());
    this->setPseudo(object.getPseudo());
    return *this;
}

std::ostream&   operator<<(std::ostream& output, const Double& object)
{
    if (object.isPseudo())
        output << object.getPseudo();
    else if (object.getSetPrecision())
        output << std::setprecision(1) << std::fixed << object.getDouble();
    else
        output << object.getDouble();
    return output;
}