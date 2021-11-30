/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:33:30 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/21 18:08:00 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class	Animal
{
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(Animal const &object);
		virtual ~Animal(void);
		
		Animal		&operator=(Animal const &right_side_object);
		void		setType(std::string name);
		std::string	getType(void) const;

		virtual void	makeSound(void) const = 0;
};

std::ostream & operator<<(std::ostream &output, Animal const &rightSideObject);

#endif
