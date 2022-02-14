/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:29:27 by lfrasson          #+#    #+#             */
/*   Updated: 2021/11/30 18:45:03 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int		main(void)
{
	std::cout << std::endl << "****** FIRST PART *******" << std::endl;
	std::cout << std::endl << "------ CONSTRUCTOR -------" << std::endl;
	//const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << std::endl << "------ TYPE -------" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	std::cout << std::endl << "------ SOUND -------" << std::endl;
	i->makeSound();
	j->makeSound();

	std::cout << std::endl << "------ DESTRUCTOR -------" << std::endl;
	delete	j;
	delete	i;
	
	int	n = 4;
	std::cout << std::endl << "****** SECOND PART *******" << std::endl;

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
