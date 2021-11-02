/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:43:50 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/01 20:56:16 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) :	_fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const integerValue)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = integerValue << this->_numberOfFractionalBits;
}

Fixed::Fixed(float const floatValue)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(floatValue *
							(1 << this->_numberOfFractionalBits));
}

Fixed::Fixed(Fixed const &object)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(int const rawBits)
{
	this->_fixedPointValue = rawBits;
}

float	Fixed::toFloat(void) const
{
	float	floatValue;
	int		fixedPointConverter;

	fixedPointConverter = 1 << this->_numberOfFractionalBits;
	floatValue = (float)this->_fixedPointValue / (float)fixedPointConverter;
	return floatValue;
}

int		Fixed::toInt(void) const
{
	return this->_fixedPointValue >> this->_numberOfFractionalBits;
}

Fixed	&Fixed::operator=(Fixed const &rightSideObject)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixedPointValue = rightSideObject.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream &output, Fixed const &rightSideObject)
{
	output << rightSideObject.toFloat();
	return output;
}
