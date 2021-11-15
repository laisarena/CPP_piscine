/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:23:59 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/15 18:20:51 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_H
# define DOG_H

# include <string>
# include <iostream>
# include "Animal.hpp"

class	Dog: public Animal
{
	public:
		Dog(void);
		Dog(Dog const &object);
		~Dog(void);

		void		makeSound(void) const;
};

#endif
