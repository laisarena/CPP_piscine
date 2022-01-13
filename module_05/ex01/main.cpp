/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:31:39 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/10 17:34:50 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void creatForm(int sign, int exec)
{
	try {
		Form form1 = Form("Form1", sign, exec);
	} 
	catch (const Form::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
}

void creatFormAndTrySign(void)
{
	try {
		Form form1 = Form("Form1", 20, 20);
		std::cout << form1 << std::endl;
		Bureaucrat maria = Bureaucrat("Maria", 10);
		form1.beSigned(maria);
		std::cout << form1 << std::endl;
	} 
	catch (const Form::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
}

void creatFormAndSign(void)
{
	try {
		Form form1 = Form("Form1", 20, 20);
		std::cout << form1 << std::endl;
		Bureaucrat maria = Bureaucrat("Maria", 30);
		form1.beSigned(maria);
		std::cout << form1 << std::endl;
	} 
	catch (const Form::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
}

void creatFormAndSignTwoTimes(void)
{
	try {
		Form form1 = Form("Form1", 20, 20);
		std::cout << form1 << std::endl;
		Bureaucrat maria = Bureaucrat("Maria", 30);
		form1.beSigned(maria);
		std::cout << form1 << std::endl;
		form1.beSigned(maria);
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
	std::cout << std::endl << "****** Try Create 4 Forms out of bound *******" << std::endl;
	creatForm(0 ,20);
	creatForm(151 ,20);
	creatForm(20 ,0);
	creatForm(20 ,151);

	std::cout << std::endl << "****** Create a form and try sign *******" << std::endl;
	creatFormAndTrySign();
	
	std::cout << std::endl << "****** Create a form and sign *******" << std::endl;
	creatFormAndSign();
	
	std::cout << std::endl << "****** Try sign a form that has alrady signed *******" << std::endl;
	creatFormAndSignTwoTimes();
	return 0;
}
