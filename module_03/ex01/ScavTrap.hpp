/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:12:50 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/14 20:26:38 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAV_TRAP_H
# define SCAV_TRAP_H

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	private:
		void		_initializeAttributes(std::string name);

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);

		void	attack(std::string const &target);
		void	guardGate(void);
};

#endif
