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

Char::Char(const Char& object): Scalar(object.getLiteral())
{
    *this = object;
    return;
}

Char::Char(char* literal):  Scalar(literal)
{
    _char = *(getLiteral());
}

Char::Char(int int_value):  Scalar(NULL)
{
    if (_willOverflow(int_value))
        setImpossible();
    _char = static_cast<char>(int_value);
}

Char::Char(float float_value):  Scalar(NULL)
{
    if (_willOverflow(float_value))
        setImpossible();
    _char = static_cast<char>(float_value);
}

Char::Char(double double_value):  Scalar(NULL)
{
    if (_willOverflow(double_value))
        setImpossible();
    _char = static_cast<char>(double_value);
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
    if (object.getImpossible())
        this->setImpossible();
    this->_char = object.getChar();
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
