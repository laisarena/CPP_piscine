/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:08:59 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/17 20:24:13 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_H
# define BRAIN_H

# include <string>
# include <iostream>

class	Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain(void);
		Brain(Brain const &object);
		virtual ~Brain(void);
		
		Brain		&operator=(Brain const &right_side_object);
		void		setIdeas(std::string *name);
		std::string	const *getIdeas(void) const;

		virtual void	makeSound(void) const;
};

std::ostream & operator<<(std::ostream &output, Brain const &rightSideObject);

#endif
