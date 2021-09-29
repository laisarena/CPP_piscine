/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:43:22 by lfrasson          #+#    #+#             */
/*   Updated: 2021/09/29 16:09:35 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void) {
	this->oldest = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void	PhoneBook::add(Contact contact) {
	this->contacts[this->oldest] = contact;
	this->oldest++;
	if (this->oldest == 8)
		this->oldest = 0;
}

void	PhoneBook::displayContacts(void) {
	int	i;

	printEnd("---------------------------------------------");
	printEnd("|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|");
	printEnd("---------------------------------------------");
	i = 0;
	while (i < 8)
	{
		if (!contacts[i].isEmpty())
		{
			print("|");
			std::cout << std::setw(10) << (i + 1);
			print("|");
			printFill(contacts[i].getFirstName(), 10);
			print("|");
			printFill(contacts[i].getLastName(), 10);
			print("|");
			printFill(contacts[i].getNickname(), 10);
			printEnd("|");
		}
		i++;
	}
	printEnd("");
	return ;
}

void	PhoneBook::displayContact(int index) {
	if (contacts[index - 1].isEmpty())
		printEnd("Empty contact");
	else 
		contacts[index - 1].display();
}

void	PhoneBook::search(void) {
	return ;
}

void	PhoneBook::exit(void) {
	return ;
}
