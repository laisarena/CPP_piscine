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

Scalar::Scalar(void): _literal(NULL)
{
    return;
}

Scalar::Scalar(const Scalar& object): _literal(object.getLiteral())
{
    *this = object;
    return;
}

Scalar::Scalar(const char* literal):  _literal(literal)
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

Scalar&   Scalar::operator=(const Scalar& object)
{
    (void)object;
    return *this;
}
