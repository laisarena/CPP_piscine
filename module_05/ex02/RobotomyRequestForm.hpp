/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:43:51 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/29 01:29:46 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Form.hpp"
# include <cstdlib>

class RobotomyRequestForm: public Form
{
	private:
		std::string	_target;

		void		_action(void) const;

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& object);
		~RobotomyRequestForm(void);
		
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& object);
};

#endif
