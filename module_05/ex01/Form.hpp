/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:47:37 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/08 20:38:32 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
	private:
		const std::string	_name;
		const int			_grade_to_sign;
		const int			_grade_to_execute;
		bool				_signed;

		void	_checkGrade(const int& grade);

	public:
		Form(void);
		Form(std::string name, int grade_to_sign, int grade_to_execute);
		Form(const Form& rigth_side_object);
		~Form(void);

		std::string	getName(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		int			getSigned(void) const;

		void		beSigned(Bureaucrat bureaucrat);

		Form&	operator=(const Form& right_side_object);

		class	GradeTooHighException:	public std::exception
		{
			public:
				const char* what(void) const throw() {
					return "* Grade too high *";
				}
		};

		class	GradeTooLowException:	public std::exception
		{
			public:
				const char* what(void) const throw() {
					return "* Grade too low *";
				}
		};
};

std::ostream& operator<<(std::ostream &output, const Form& right_side_object);

#endif
