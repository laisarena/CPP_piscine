/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 22:01:36 by coder             #+#    #+#             */
/*   Updated: 2021/10/26 02:58:56 by coder            ###   ########.fr       */
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
		Fixed(Fixed &obj);
		~Fixed(void);
		Fixed	&operator=(Fixed const &other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
