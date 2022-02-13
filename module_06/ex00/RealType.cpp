/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RealType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:05:51 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/04 20:05:54 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RealType.hpp"

RealType::RealType(void):   ScalarType(),
                            _set_precision(false),
                            _pseudo()
{
    return;
}

RealType::RealType(const RealType& object)
{
    *this = object;
    return;
}

RealType::RealType(const char* literal):    ScalarType(literal),
                                            _set_precision(false),
                                            _pseudo()
{
    return;
}

RealType::RealType(Pseudo pseudo):  ScalarType(),
                                    _set_precision(false),
                                    _pseudo(pseudo)
{
    return;
}

RealType::RealType(const char* literal, bool setprecision):
                                            ScalarType(literal),
                                            _set_precision(setprecision),
                                            _pseudo()
{
    return;
}

RealType::~RealType(void)
{
    return;
}

bool    RealType::getSetPrecision(void) const
{
    return _set_precision;
}

void    RealType::setSetPrecision(bool setprecision)
{
    _set_precision = setprecision;
}

Pseudo  RealType::getPseudo() const
{
    return _pseudo;
}

void    RealType::setPseudo(Pseudo pseudo)
{
    _pseudo = pseudo;
}

bool    RealType::isPseudo() const
{
    if (_pseudo.getPseudo())
        return true;
    return false;
}


RealType&   RealType::operator=(const RealType& object)
{
    this->setPseudo(object.getPseudo());
    this->_set_precision = object.getSetPrecision();
    return *this;
}