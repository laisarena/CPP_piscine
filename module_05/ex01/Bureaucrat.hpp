/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:45:44 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/19 11:17:41 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

		void		_checkGrade(void);

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& rigth_side_object);
		~Bureaucrat(void);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		
		void		signForm(Form& form);

		Bureaucrat&	operator=(const Bureaucrat& right_side_object);

		class	GradeTooHighException:	public std::exception
		{
			public:
				const char* what(void) const throw() {
					return "* The highest bureaucrat grade possible is 1 *";
				}
		};

		class	GradeTooLowException:	public std::exception
		{
			public:
				const char* what(void) const throw() {
					return "* The lowest bureaucrat grade possible is 150 *";
				}
		};
};

std::ostream& operator<<(std::ostream &output, const Bureaucrat& right_side_object);

#endif
