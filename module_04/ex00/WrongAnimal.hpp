/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:33:30 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/18 19:01:49 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

# include <string>
# include <iostream>

class	WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &object);
		virtual ~WrongAnimal(void);
		
		WrongAnimal		&operator=(WrongAnimal const &right_side_object);
		void			setType(std::string name);
		std::string		getType(void) const;

		void			makeSound(void) const;
};

std::ostream & operator<<(std::ostream &output, WrongAnimal const &rightSideObject);

#endif
