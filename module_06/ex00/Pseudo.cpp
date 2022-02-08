/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pseudo.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:24:27 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/07 16:24:29 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pseudo.hpp"

Pseudo::Pseudo(void):   _pseudo(0)
{
    return;
}

Pseudo::Pseudo(const Pseudo& object) 
{
    *this = object;
    return;
}

Pseudo::Pseudo(std::string literal)
{
	if (literal == "nan" || literal == "nanf")
		_pseudo = NOT_A_NUM;
	else if (literal == "+inf" || literal == "+inff")
		_pseudo = PLUS_INF;
	else if (literal == "-inf" || literal == "-inff")
		_pseudo = MINUS_INF;
}

Pseudo::~Pseudo(void)
{
    return;
}

int Pseudo::getPseudo(void) const
{
    return _pseudo;
}

Pseudo&   Pseudo::operator=(const Pseudo& object)
{
    this->_pseudo = object._pseudo;
    return *this;
}

std::ostream&   operator<<(std::ostream& output, const Pseudo& object)
{
    switch (object.getPseudo()) 
    {
        case NOT_A_NUM:
            output << "nan";
            break;
        case PLUS_INF:
            output << "+inf";
            break;
        case MINUS_INF:
            output << "-inf";
            break;
    }
    return output;
}
