/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:05:42 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/29 02:08:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>
# include "Form.hpp" 
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern 
{
	private:
		std::string	*_form_names;

		Form*	(Intern::**_make_form)(std::string);

		void	_defineFormNames(void);
		void	_defineFormFunctions(void);
		int		_getFormIndex(std::string name);
		bool	_invalidName(int index, std::string name);
		Form*	_makeFormShrubberyCreation(std::string target);
		Form*	_makeFormRobotomyRequest(std::string target);
		Form*	_makeFormPresidentialPardon(std::string target);

	public:
		Intern(void);
		Intern(const Intern& rigth_side_object);
		~Intern(void);

		Form*	makeForm(std::string form_name, std::string target);

		Intern&	operator=(const Intern& right_side_object);
};

#endif
