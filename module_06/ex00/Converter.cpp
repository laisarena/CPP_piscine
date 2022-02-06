/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:38:26 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/02 20:38:29 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(void)
{
    return;
}

Converter::Converter(const Converter& object)
{
    *this = object;
    return;
}

Converter::Converter(char* literal, int type):  _literal(literal),
                                                _type(type)
{
    switch (_type) 
    {
        case CHAR:
            _fromChar();
            break;
        case INT:
            _fromInt();
            break;
        case DOUBLE:
            _fromDouble();
            break;
        case FLOAT:
            _fromFloat();
            break;
        default:
            throw std::exception();
            break;
    }
    return;
}

Converter::~Converter(void)
{
    return;
}

void    Converter::_fromChar(void)
{
    _char = Char(_literal);
    _int = Int(_char.getChar());
    _float = Float(_char.getChar());
    _double = Double(_char.getChar());

}

void    Converter::_fromInt(void)
{
    _int = Int(_literal);
    _char = Char(_int.getInt());
    _float = Float(_int.getInt());
    _double = Double(_int.getInt());
}

void    Converter::_fromFloat(void)
{
    _float = Float(_literal);
    _char = Char(_float.getFloat());
    _int = Int(_float.getFloat());
    _double = Double(_float.getFloat());
}

void    Converter::_fromDouble(void)
{
    _double = Double(_literal);
    _char = Char(_double.getDouble());
    _int = Int(_double.getDouble());
    _float = Float(_double.getDouble());
}

void    Converter::show(void)
{
    std::cout << "char: " << _char << std::endl;
    std::cout << "int: " << _int << std::endl;
    std::cout << "float: " << _float << std::endl;
    std::cout << "double: " << _double << std::endl;
}

Converter&   Converter::operator=(const Converter& object)
{
    (void)object;
    return *this;
}