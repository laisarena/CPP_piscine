/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 22:01:36 by coder             #+#    #+#             */
/*   Updated: 2021/11/01 20:44:06 by lfrasson         ###   ########.fr       */
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
		Fixed(Fixed const &object);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed	&operator=(Fixed const &rightSideObject);
};

#endif
