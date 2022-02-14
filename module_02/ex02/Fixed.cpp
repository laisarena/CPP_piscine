/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:43:50 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/01 21:18:24 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) :	_fixedPointValue(0)
{
	return;
}

Fixed::Fixed(int const integerValue)
{
	this->_fixedPointValue = integerValue << this->_numberOfFractionalBits;
}

Fixed::Fixed(float const floatValue)
{
	this->_fixedPointValue = roundf(floatValue *
							(1 << this->_numberOfFractionalBits));
}

Fixed::Fixed(Fixed const &object)
{
	*this = object;
}

Fixed::~Fixed(void)
{
	return;
}

int		Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
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
	this->_fixedPointValue = rightSideObject.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(Fixed const &rightSideObject)
{
	Fixed	result(*this);

	result.setRawBits(result.getRawBits() + rightSideObject.getRawBits());
	return result;
}

Fixed	Fixed::operator-(Fixed const &rightSideObject)
{
	Fixed	result(*this);

	result.setRawBits(result.getRawBits() - rightSideObject.getRawBits());
	return result;
}

Fixed	Fixed::operator*(Fixed const &rightSideObject)
{
	Fixed	result(*this);
	int		rawBits;

	rawBits = result.getRawBits() * rightSideObject.getRawBits();
	result.setRawBits(rawBits >> this->_numberOfFractionalBits);
	return result;
}

Fixed	Fixed::operator/(Fixed const &rightSideObject)
{
	Fixed	result(*this);
	int		rawBits;

	rawBits = result.getRawBits()
		/ (rightSideObject.getRawBits() >> this->_numberOfFractionalBits);
	result.setRawBits(rawBits);
	return result;
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
	output << rightSideObject.toFloat();
	return output;
}
