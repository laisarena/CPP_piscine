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

ScalarType::ScalarType(void):   _literal(NULL)
{
    return;
}

ScalarType::ScalarType(const ScalarType& object)
{
    *this = object;
    return;
}

ScalarType::ScalarType(const char* literal):    _literal(literal)
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

ScalarType&   ScalarType::operator=(const ScalarType& object)
{
    this->_literal = object.getLiteral();
    return *this;
}