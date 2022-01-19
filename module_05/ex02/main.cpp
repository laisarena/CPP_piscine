/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:31:39 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/19 11:17:20 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

void tryExecute1(void)
{
	try {
		Bureaucrat maria = Bureaucrat("Maria", 10);
		ShrubberyCreationForm form1 = ShrubberyCreationForm("home");
		maria.executeForm(form1);
	} 
	catch (const Form::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
}

void tryExecute2(void)
{
	try {
		Bureaucrat maria = Bureaucrat("Maria", 10);
		Bureaucrat jose = Bureaucrat("Jose", 150);
		ShrubberyCreationForm form1 = ShrubberyCreationForm("home");
		maria.signForm(form1);
		jose.executeForm(form1);
	} 
	catch (const Form::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
}

void executeForm(void)
{
	try {
		Bureaucrat maria = Bureaucrat("Maria", 10);
		Bureaucrat jose = Bureaucrat("Jose", 20);
		ShrubberyCreationForm form1 = ShrubberyCreationForm("home");
		maria.signForm(form1);
		jose.executeForm(form1);
	} 
	catch (const Form::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
}

int	main(void)
{
	std::cout << std::endl << "****** Try execute a form that is not signed *******" << std::endl;
	tryExecute1();

	std::cout << std::endl << "****** Try execute a form with wrong grade *******" << std::endl;
	tryExecute2();
	
	std::cout << std::endl << "****** Execute form *******" << std::endl;
	executeForm();
	
	return 0;
}
