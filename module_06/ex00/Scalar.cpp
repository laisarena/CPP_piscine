/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:38:05 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/03 15:38:06 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(void):   _literal(NULL),
                        _impossible(false)
{
    return;
}

Scalar::Scalar(const Scalar& object):   _literal(object.getLiteral()),
                                        _impossible(false)
{
    *this = object;
    return;
}

Scalar::Scalar(const char* literal):    _literal(literal),
                                        _impossible(false)
{
    return;
}

Scalar::~Scalar(void)
{
    return;
}

const char* Scalar::getLiteral() const
{
    return _literal;   
}

bool    Scalar::getImpossible() const
{
    return _impossible;
}

void    Scalar::setImpossible(void)
{
    _impossible = true;
}

Scalar&   Scalar::operator=(const Scalar& object)
{
    this->_literal = object.getLiteral();
    this->_impossible = object.getImpossible();
    return *this;
}
