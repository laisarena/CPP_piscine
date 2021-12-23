/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 22:31:39 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/23 13:41:23 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << std::endl << "****** Try create Bureaucrat Maria with grade 0 *******" << std::endl;
	Bureaucrat maria = Bureaucrat("Maria", 0);
	std::cout << std::endl << "****** PRINT *******" << std::endl;
	std::cout << maria << std::endl;
	std::cout << std::endl << "****** Try increment Maria *******" << std::endl;
	maria.incrementGrade();
	std::cout << std::endl << "****** PRINT *******" << std::endl;
	std::cout << maria << std::endl;
	std::cout << std::endl << "****** Try decrement Maria *******" << std::endl;
	maria.decrementGrade();
	std::cout << std::endl << "****** PRINT *******" << std::endl;
	std::cout << maria << std::endl;

	std::cout << std::endl << "****** Try create Bureaucrat Enzo with grade 151 *******" << std::endl;
	Bureaucrat enzo = Bureaucrat("Enzo", 151);
	std::cout << std::endl << "****** PRINT *******" << std::endl;
	std::cout << enzo << std::endl;
	std::cout << std::endl << "****** Try decrement Enzo *******" << std::endl;
	enzo.decrementGrade();
	std::cout << std::endl << "****** PRINT *******" << std::endl;
	std::cout << enzo << std::endl;
	std::cout << std::endl << "****** Try increment Enzo *******" << std::endl;
	enzo.incrementGrade();
	std::cout << std::endl << "****** PRINT *******" << std::endl;
	std::cout << enzo << std::endl;

	return 0;
}
