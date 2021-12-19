/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:26:40 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/18 18:17:35 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		~Ice(void);
		
		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif
