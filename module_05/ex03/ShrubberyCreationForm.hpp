/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:46:07 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/19 10:41:05 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		std::string	_target;

		void		_action(void) const;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& object);
		~ShrubberyCreationForm(void);
		
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& object);
};

#endif
