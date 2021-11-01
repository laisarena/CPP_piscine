/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:28:50 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/01 16:11:51 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

static void	subjectTest(void)
{
	std::cout << "----- SUBJECT  -----" << std::endl;
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}

static void	comparisonTest(void)
{
	std::cout << std::endl << "----- COMPARISON  -----" << std::endl;
	
	Fixed a;
	Fixed b(10.5f);
	Fixed c(10.5f);

	std::cout << a << " < " << b << " : " << (a < b) << std::endl;
	std::cout << a << " > " << b << " : " << (a > b) << std::endl;
	std::cout << c << " >= " << b << " : " << (c >= b) << std::endl;
	std::cout << c << " <= " << b << " : " << (c <= b) << std::endl;
	std::cout << c << " == " << b << " : " << (c == b) << std::endl;
	std::cout << c << " != " << b << " : " << (c != b) << std::endl;
}

static void	arithmeticTest(void)
{
	std::cout << std::endl << "----- ARITHMETIC  -----" << std::endl;
	
	Fixed a(2);
	Fixed b(10.5f);

	std::cout << a << " + " << b << " = " << (a + b) << std::endl;
	std::cout << a << " - " << b << " = " << (a - b) << std::endl;
	std::cout << a << " * " << b << " = " << (a * b) << std::endl;
	std::cout << a << " / " << b << " = " << (a / b) << std::endl;
}

int main( void ) 
{
	subjectTest();
	comparisonTest();
	arithmeticTest();
	//incrementTest();
	//decrementTest();
	//maxTest();
	//minTest();

	/*a = b;
	Fixed const c( a / Fixed( 2 ) );
	std::cout << c << std::endl;
	*/
	return 0;
}
