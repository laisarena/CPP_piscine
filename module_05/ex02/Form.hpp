/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:47:37 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/29 02:38:13 by coder            ###   ########.fr       */
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

	protected:
		virtual void	_action(void) const = 0;

	public:
		Form(void);
		Form(std::string name, int grade_to_sign, int grade_to_execute);
		Form(const Form& rigth_side_object);
		virtual	~Form(void);

		std::string	getName(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		int			getSigned(void) const;

		void		beSigned(Bureaucrat bureaucrat);
		void		execute(Bureaucrat& executor) const;

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
		
		class	AlreadySignedException:	public std::exception
		{
			public:
				const char* what(void) const throw() {
					return "* This form has already been signed *";
				}
		};

		class	NotSignedException:	public std::exception
		{
			public:
				const char* what(void) const throw() {
					return "* This form has not yet been signed *";
				}
		};
};

std::ostream& operator<<(std::ostream &output, const Form& right_side_object);

#endif
