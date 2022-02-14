/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:29:53 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/06 20:49:21 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_H
# define CAT_H

# include <string>
# include <iostream>
# include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat(void);
		Cat(Cat const &object);
		~Cat(void);

		void		makeSound(void) const;

		Cat		&operator=(Cat const &right_side_object);
};

#endif
