/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:29:27 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/18 17:42:14 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int		main(void)
{
	int	n = 4;
	std::cout << std::endl << "****** ANIMAL ARRAY *******" << std::endl;

	std::cout << std::endl << "------ CONSTRUCTOR -------" << std::endl;
	Animal	*animals[n];

	for (int i = 0; i < n / 2; i++)
		animals[i] = new Dog();
	for (int i = n / 2; i < n; i++)
		animals[i] = new Cat();

	std::cout << std::endl << "------ DESTRUCTOR -------" << std::endl;
	for (int i = 0; i < n; i++)
		delete animals[i];
	
	std::cout << std::endl << "****** DEEP COPY *******" << std::endl;
	std::cout << std::endl << "------ CONSTRUCTOR -------" << std::endl;
	Dog	*dog = new Dog();
	Dog	dogCopy = Dog(*dog);

	const std::string	*pointer;
	pointer = &(dog->getBrain()->getIdeas()[3]);
	std::cout << dog->getBrain()->getIdeas()[3] << " -> address "<<  pointer << std::endl;
	pointer = &(dogCopy.getBrain()->getIdeas()[3]);
	std::cout << dogCopy.getBrain()->getIdeas()[3] << " -> address "<< pointer<< std::endl;

	std::cout << std::endl << "------ DESTRUCTOR -------" << std::endl;
	delete dog;
	std::cout << dogCopy.getBrain()->getIdeas()[3] << std::endl;

	return 0;
}
