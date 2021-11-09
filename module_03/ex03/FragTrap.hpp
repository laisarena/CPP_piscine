/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:07:49 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/08 21:48:45 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAG_TRAP_H
# define FRAG_TRAP_H

# include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
	protected:
		static int const	_initial_hitpoint;
		static int const	_initial_energy_point;
		static int const	_initial_attack_damage;

		void	initializeAttributes(std::string name);

	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);

		void	attack(std::string const &target);
		void	highFivesGuys(void);
};

#endif
