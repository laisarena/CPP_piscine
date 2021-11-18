/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:29:27 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/18 19:08:46 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	std::cout << std::endl << "****** RIGHT *******" << std::endl;
	std::cout << std::endl << "------ CONSTRUCTOR -------" << std::endl;
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << std::endl << "------ TYPE -------" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	std::cout << std::endl << "------ SOUND -------" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << "------ DESTRUCTOR -------" << std::endl;
	delete	meta;
	delete	j;
	delete	i;
	
	std::cout << std::endl << "****** WRONG *******" << std::endl;
	std::cout << std::endl << "------ CONSTRUCTOR -------" << std::endl;
	const WrongAnimal	*wrong_meta = new WrongAnimal();
	const WrongAnimal	*wrong_i = new WrongCat();

	std::cout << std::endl << "------ TYPE -------" << std::endl;
	std::cout << wrong_i->getType() << " " << std::endl;
	
	std::cout << std::endl << "------ SOUND -------" << std::endl;
	wrong_meta->makeSound();
	wrong_i->makeSound();

	std::cout << std::endl << "------ DESTRUCTOR -------" << std::endl;
	delete	wrong_meta;
	delete	wrong_i;
	
	return 0;
}
