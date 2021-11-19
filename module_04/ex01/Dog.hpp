/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:23:59 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/18 20:09:56 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_H
# define DOG_H

# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class	Dog: public Animal
{
	private:
		Brain	*brain;

	public:
		Dog(void);
		Dog(Dog const &object);
		~Dog(void);

		Brain		*getBrain(void) const;
		void		makeSound(void) const;
};

#endif
