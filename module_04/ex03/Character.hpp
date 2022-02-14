/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:10:09 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/22 00:12:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_materia[4];
		static int	_inventory_size;

		void	_initializeInventory(void);
		bool	_invalid_index(int idx);

	public:
		Character(void);
		Character(std::string name);
		Character(const Character& object);
		virtual	~Character();

		std::string const &	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

		Character&	operator=(const Character& right_side_object);
};

#endif
