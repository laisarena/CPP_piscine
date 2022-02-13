/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:16:59 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/03 15:17:01 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Char.hpp"

Char::Char(void)
{
    return;
}

Char::Char(const Char& object): IntegerType(object.getLiteral())
{
    *this = object;
    return;
}

Char::Char(char* literal):  IntegerType(literal)
{
    _char = *(getLiteral());
}

Char::Char(int int_value):  IntegerType(NULL)
{
    if (_willOverflow(int_value))
        setImpossible(true);
    _char = static_cast<char>(int_value);
}

Char::Char(float float_value):  IntegerType(NULL)
{
    if (_willOverflow(float_value))
        setImpossible(true);
    _char = static_cast<char>(float_value);
}

Char::Char(double double_value):  IntegerType(NULL)
{
    if (_willOverflow(double_value))
        setImpossible(true);
    _char = static_cast<char>(double_value);
}

Char::Char(Pseudo pseudo):  IntegerType(pseudo)
{
    setImpossible(true);
}

Char::~Char(void)
{
    return;
}

unsigned char   Char::getChar(void) const
{
    return _char;
}

bool    Char::_willOverflow(long double value)
{
    if (value > UCHAR_MAX)
        return true;
    if (value < 0)
        return true;
    return false;
}

Char&   Char::operator=(const Char& object)
{
    this->_char = object.getChar();
    this->setImpossible(object.getImpossible());
    this->setPseudo(object.getPseudo());
    return *this;
}

std::ostream&   operator<<(std::ostream& output, const Char& object)
{
    char c = object.getChar();

    if (object.getImpossible())
        output << "Impossible";
	else if (!isgraph(c))
        output << "Non displayable";
    else
        output << c;
    return output;
}
