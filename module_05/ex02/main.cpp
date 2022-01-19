/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:31:39 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/19 14:58:18 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
 
void tryExecuteNotSigned(void)
{
	Bureaucrat maria = Bureaucrat("Maria", 10);
	ShrubberyCreationForm form1 = ShrubberyCreationForm("home");
	maria.executeForm(form1);
}

void tryExecuteWrongGrade(void)
{
	Bureaucrat maria = Bureaucrat("Maria", 10);
	Bureaucrat jose = Bureaucrat("Jose", 150);
	ShrubberyCreationForm form1 = ShrubberyCreationForm("home");
	maria.signForm(form1);
	jose.executeForm(form1);
}

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
	std::cout << std::endl << "****** Try execute a form that is not signed *******" << std::endl;
	tryExecuteNotSigned();

	std::cout << std::endl << "****** Try execute a form with wrong grade *******" << std::endl;
	tryExecuteWrongGrade();
	
	ShrubberyCreationForm form1 = ShrubberyCreationForm("home");
	executeForm(form1);
	RobotomyRequestForm form2 = RobotomyRequestForm ("Jorge");
	executeForm(form2);
	PresidentialPardonForm form3 = PresidentialPardonForm("Jorge");
	executeForm(form3);
	
	return 0;
}
