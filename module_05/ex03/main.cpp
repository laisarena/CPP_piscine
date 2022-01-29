/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:31:39 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/29 02:06:42 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
 
static void executeForm(Form &form)
{
	Bureaucrat maria = Bureaucrat("Maria", 10);
	Bureaucrat jose = Bureaucrat("Jose", 5);
	maria.signForm(form);
	jose.executeForm(form);
}

int	main(void)
{
	Intern someRandomIntern;
	Intern otherRandomIntern(someRandomIntern);
	Form* form;

	std::cout << std::endl << "***************************" << std::endl;
	form = otherRandomIntern.makeForm("shrubbery creation", "Home");	
	executeForm(*form);
	delete form;
	
	std::cout << std::endl << "***************************" << std::endl;
	form = someRandomIntern.makeForm("robotomy request", "Bender");	
	executeForm(*form);
	delete form;
	
	std::cout << std::endl << "***************************" << std::endl;
	form = someRandomIntern.makeForm("presidential pardon", "Bender");	
	executeForm(*form);
	delete form;
	
	std::cout << std::endl << "***************************" << std::endl;
	form = someRandomIntern.makeForm("Presidential pardon", "Bender");	
	
	return 0;
}
