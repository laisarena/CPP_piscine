/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:21:46 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/22 00:01:07 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& object);
		~Cure(void);
		
		AMateria*	clone() const;
		void		use(ICharacter& target);
		
		Cure&	operator=(const Cure& right_side_object);
};

#endif
