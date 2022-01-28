/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:31:39 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/19 17:58:50 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
 
void executeForm(Form &form)
{
	std::cout << std::endl << "****** Execute form *******" << std::endl;
	Bureaucrat maria = Bureaucrat("Maria", 10);
	Bureaucrat jose = Bureaucrat("Jose", 5);
	maria.signForm(form);
	jose.executeForm(form);
}

int	main(void)
{
	Intern someRandomIntern;
	Form* form;

	form = someRandomIntern.makeForm("shrubbery creation", "Home");	
	executeForm(*form);
	delete form;
	
	form = someRandomIntern.makeForm("robotomy request", "Bender");	
	executeForm(*form);
	delete form;
	
	form = someRandomIntern.makeForm("presidential pardon", "Bender");	
	executeForm(*form);
	delete form;
	
	form = someRandomIntern.makeForm("Presidential pardon", "Bender");	
	
	return 0;
}
