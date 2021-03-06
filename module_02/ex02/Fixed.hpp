/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 22:01:36 by coder             #+#    #+#             */
/*   Updated: 2021/11/01 21:17:37 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_H
# define FIXED_H

# include <iostream>

class	Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_numberOfFractionalBits = 8;

	public:
		Fixed(void);
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const &object);
		~Fixed(void);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		float	toFloat(void) const;
		int		toInt(void) const;
		
		Fixed	&operator=(Fixed const &rightSideObject);
		
		Fixed	operator+(Fixed const &rightSideObject);
		Fixed	operator-(Fixed const &rightSideObject);
		Fixed	operator*(Fixed const &rightSideObject);
		Fixed	operator/(Fixed const &rightSideObject);
		
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		
		bool	operator>(Fixed const &rightSideObject) const;
		bool	operator<(Fixed const &rightSideObject) const;
		bool	operator>=(Fixed const &rightSideObject) const;
		bool	operator<=(Fixed const &rightSideObject) const;
		bool	operator==(Fixed const &rightSideObject) const;
		bool	operator!=(Fixed const &rightSideObject) const;
		
		static Fixed	&min(Fixed &value1, Fixed &value2);
		static Fixed	&max(Fixed &value1, Fixed &value2);
		static Fixed const	&min(Fixed const &value1, Fixed const &value2);
		static Fixed const	&max(Fixed const &value1, Fixed const &value2);
};

std::ostream & operator<<(std::ostream &output, Fixed const &rightSideObject);

#endif
