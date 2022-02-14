/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:12:50 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/15 10:57:30 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAV_TRAP_H
# define SCAV_TRAP_H

# include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap
{
	private:
		void	_initializeAttributes(std::string name);

	protected:
		static int const	_initial_hitpoint;
		static int const	_initial_energy_point;
		static int const	_initial_attack_damage;

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);

		void	attack(std::string const &target);
		void	guardGate(void);
};

#endif
