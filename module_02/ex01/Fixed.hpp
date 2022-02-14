/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 22:01:36 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/01 20:51:30 by lfrasson         ###   ########.fr       */
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
		Fixed(int const integerValue);
		Fixed(float const floatValue);
		Fixed(Fixed const &object);
		~Fixed(void);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		float	toFloat(void) const;
		int		toInt(void) const;
		
		Fixed	&operator=(Fixed const &rightSideObject);
};

std::ostream & operator<<(std::ostream &output, Fixed const &rightSideObject);

#endif
