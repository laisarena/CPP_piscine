/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 22:20:14 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/05 21:46:21 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_H
#define MATERIA_SOURCE_H

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class	MateriaSource:	public IMateriaSource
{
	private:
		AMateria	*_learned_materia_storage[4];
		static int	_storage_size;

		void	_initializeStorage(void);
		bool	_invalid_index(int idx);
	
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource &object);

		MateriaSource	&operator=(MateriaSource &right_side_object);
		virtual				~MateriaSource();
		virtual void		learnMateria(AMateria *materia);
		virtual AMateria*	createMateria(std::string const & type) ;

};

#endif
