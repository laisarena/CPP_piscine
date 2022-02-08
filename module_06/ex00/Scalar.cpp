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
                        _impossible(false),
                        _pseudo()
{
    return;
}

Scalar::Scalar(const Scalar& object)
{
    *this = object;
    return;
}

Scalar::Scalar(const char* literal):    _literal(literal),
                                        _impossible(false),
                                        _pseudo()
{
    return;
}

Scalar::Scalar(Pseudo pseudo):  _literal(NULL),
                                _impossible(false),
                                _pseudo(pseudo)
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

Pseudo  Scalar::getPseudo() const
{
    return _pseudo;
}

void    Scalar::setImpossible(bool impossible)
{
    _impossible = impossible;
}

void    Scalar::setPseudo(Pseudo pseudo)
{
    _pseudo = pseudo;
}

bool    Scalar::isPseudo() const
{
    if (_pseudo.getPseudo())
        return true;
    return false;
}

Scalar&   Scalar::operator=(const Scalar& object)
{
    this->_literal = object.getLiteral();
    this->_impossible = object.getImpossible();
    this->_pseudo = object.getPseudo();
    return *this;
}
