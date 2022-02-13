/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntegerType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:38:05 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/03 15:38:06 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IntegerType.hpp"

IntegerType::IntegerType(void): ScalarType(),
                                _impossible(false)
{
    return;
}

IntegerType::IntegerType(const IntegerType& object)
{
    *this = object;
    return;
}

IntegerType::IntegerType(const char* literal):  ScalarType(literal),
                                                _impossible(false)
{
    return;
}

IntegerType::IntegerType(Pseudo pseudo):    ScalarType(pseudo),
                                            _impossible(false)
{
    return;
}

IntegerType::~IntegerType(void)
{
    return;
}

bool    IntegerType::getImpossible() const
{
    return _impossible;
}

void    IntegerType::setImpossible(bool impossible)
{
    _impossible = impossible;
}

IntegerType&   IntegerType::operator=(const IntegerType& object)
{
    this->setPseudo(object.getPseudo());
    this->_impossible = object.getImpossible();
    return *this;
}
