/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:46:34 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/14 20:28:33 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAP_TRAP_H
# define CLAP_TRAP_H

# include <string>
# include <iostream>

class	ClapTrap
{
	private:
		void		_initializeAttributes(std::string name);

	protected:
		std::string	_name;
		int			_hitpoints;
		int			_energy_points;
		int			_attack_damage;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &object);
		~ClapTrap(void);
		ClapTrap	&operator=(ClapTrap const &right_side_object);

		void	setName(std::string name);
		void	setHitpoints(int hitpoints);
		void	setEnengyPoints(int energy_points);
		void	setAttackDamage(int attack_damage);

		std::string	getName(void) const;
		int			getHitpoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

std::ostream & operator<<(std::ostream &output, ClapTrap const &rightSideObject);

#endif
