/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:43:50 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/01 16:25:02 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->setRawBits(0);
}

Fixed::Fixed(int const integerValue)
{
	this->setRawBits(integerValue);
}

Fixed::Fixed(float const floatValue)
{
	this->setRawBits(floatValue);
}

Fixed::Fixed(Fixed const &object)
{
	*this = object;
}

Fixed::~Fixed(void)
{
	return;
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

int		Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(int const intValue)
{
	this->_fixedPointValue = intValue << this->_numberOfFractionalBits;
}

void	Fixed::setRawBits(float const floatValue)
{
	this->_fixedPointValue = roundf(floatValue *
							(1 << this->_numberOfFractionalBits));
}

Fixed	&Fixed::operator=(Fixed const &rightSideObject)
{
	this->_fixedPointValue = rightSideObject.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(Fixed const &rightSideObject)
{
	this->_fixedPointValue += rightSideObject.getRawBits();
	return *this;
}

Fixed	Fixed::operator-(Fixed const &rightSideObject)
{
	this->_fixedPointValue -= rightSideObject.getRawBits();
	return *this;
}

Fixed	Fixed::operator*(Fixed const &rightSideObject)
{
	this->_fixedPointValue *= rightSideObject.getRawBits();
	this->_fixedPointValue = this->_fixedPointValue
									>> this->_numberOfFractionalBits;
	return *this;
}

Fixed	Fixed::operator/(Fixed const &rightSideObject)
{
	this->_fixedPointValue /= rightSideObject.getRawBits()
									>> this->_numberOfFractionalBits;
	return *this;
}

Fixed	&Fixed::operator++(void)
{
	this->_fixedPointValue++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	this->_fixedPointValue++;
	return temp;
}

Fixed	&Fixed::operator--(void)
{
	this->_fixedPointValue--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	this->_fixedPointValue--;
	return temp;
}

bool	Fixed::operator>(Fixed const &rightSideObject) const
{
	return this->_fixedPointValue > rightSideObject.getRawBits();
}

bool	Fixed::operator<(Fixed const &rightSideObject) const
{
	return this->_fixedPointValue < rightSideObject.getRawBits();
}

bool	Fixed::operator>=(Fixed const &rightSideObject) const
{
	return this->_fixedPointValue >= rightSideObject.getRawBits();
}

bool	Fixed::operator<=(Fixed const &rightSideObject) const
{
	return this->_fixedPointValue <= rightSideObject.getRawBits();
}

bool	Fixed::operator==(Fixed const &rightSideObject) const
{
	return this->_fixedPointValue == rightSideObject.getRawBits();
}

bool	Fixed::operator!=(Fixed const &rightSideObject) const
{
	return this->_fixedPointValue != rightSideObject.getRawBits();
}

Fixed	&Fixed::min(Fixed &value1, Fixed &value2)
{
	if (value1 > value2)
		return value2;
	return value1;
}

Fixed const	&Fixed::min(Fixed const &value1, Fixed const &value2)
{
	if (value1 > value2)
		return value2;
	return value1;
}

Fixed 	&Fixed::max(Fixed &value1, Fixed &value2)
{
	if (value1 < value2)
		return value2;
	return value1;
}

Fixed const	&Fixed::max(Fixed const &value1, Fixed const &value2)
{
	if (value1 < value2)
		return value2;
	return value1;
}

std::ostream & operator<<(std::ostream &output, Fixed const &rightSideObject)
{
	float x;

	x = rightSideObject.toFloat();
	output << x;
	return output;
}
