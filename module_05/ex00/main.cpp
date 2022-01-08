/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:31:39 by lfrasson          #+#    #+#             */
/*   Updated: 2022/01/08 17:58:04 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	tryCreateBureaucratWith0(void)
{
	try {
		std::cout << std::endl << "****** Try create Bureaucrat Maria with grade 0 *******" << std::endl;
		Bureaucrat maria = Bureaucrat("Maria", 0);
		std::cout << std::endl << "****** PRINT *******" << std::endl;
		std::cout << maria << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
}

void	tryCreateBureaucratWith151(void)
{
	try {
		std::cout << std::endl << "****** Try create Bureaucrat Enzo with grade 151 *******" << std::endl;
		Bureaucrat enzo = Bureaucrat("Enzo", 151);
		std::cout << std::endl << "****** PRINT *******" << std::endl;
		std::cout << enzo << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
}

void	incrementAndDecrementBureaucrat(void)
{
	try {
		std::cout << std::endl << "****** Create Bureaucrat Maria with grade 20 *******" << std::endl;
		Bureaucrat maria = Bureaucrat("Maria", 20);
		std::cout << maria << std::endl;
		std::cout << std::endl << "****** Increment Maria *******" << std::endl;
		maria.incrementGrade();
		std::cout << maria << std::endl;
		std::cout << std::endl << "****** Decrement Maria *******" << std::endl;
		maria.decrementGrade();
		std::cout << maria << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}	
}

void	tryIncrementOutBound(void)
{
	try {
		std::cout << std::endl << "****** Create Bureaucrat Maria with grade 1 *******" << std::endl;
		Bureaucrat maria = Bureaucrat("Maria", 1);
		std::cout << maria << std::endl;
		std::cout << std::endl << "****** Increment Maria *******" << std::endl;
		maria.incrementGrade();
		std::cout << maria << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}	
}

void	tryDecrementOutBound(void)
{
	try {
		std::cout << std::endl << "****** Create Bureaucrat Maria with grade 150 *******" << std::endl;
		Bureaucrat maria = Bureaucrat("Maria", 150);
		std::cout << maria << std::endl;
		std::cout << std::endl << "****** Decrement Maria *******" << std::endl;
		maria.decrementGrade();
		std::cout << maria << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}	
}

int	main(void)
{
	tryCreateBureaucratWith0();
	tryCreateBureaucratWith151();
	incrementAndDecrementBureaucrat();
	tryIncrementOutBound();
	tryDecrementOutBound();
	
	return 0;
}
