/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:38:05 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/03 15:38:06 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarType.hpp"

ScalarType::ScalarType(void):   _literal(NULL),
                                _pseudo()
{
    return;
}

ScalarType::ScalarType(const ScalarType& object)
{
    *this = object;
    return;
}

ScalarType::ScalarType(const char* literal):    _literal(literal),
                                                _pseudo()
{
    return;
}

ScalarType::ScalarType(Pseudo pseudo):  _literal(NULL),
                                        _pseudo(pseudo)
{
    return;
}

ScalarType::~ScalarType(void)
{
    return;
}

const char* ScalarType::getLiteral() const
{
    return _literal;   
}

Pseudo  ScalarType::getPseudo() const
{
    return _pseudo;
}

void    ScalarType::setPseudo(Pseudo pseudo)
{
    _pseudo = pseudo;
}

bool    ScalarType::isPseudo() const
{
    if (_pseudo.getPseudo())
        return true;
    return false;
}

ScalarType&   ScalarType::operator=(const ScalarType& object)
{
    this->_literal = object.getLiteral();
    this->_pseudo = object.getPseudo();
    return *this;
}