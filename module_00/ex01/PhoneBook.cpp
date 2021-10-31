/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:43:22 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/02 23:13:49 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _oldest(0) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void	PhoneBook::add(Contact contact) {
	if (contact.isEmpty())
		return ;
	this->_contacts[this->_oldest++] = contact;
	if (this->_oldest == 8)
		this->_oldest = 0;
}

bool	PhoneBook::isEmpty(void) {
	int	i;

	i = 0;
	while (i < 8)
		if (!this->_contacts[i++].isEmpty())
			return false;
	return true;
}

void	PhoneBook::displayContacts(void) {
	int	i;

	printEnd("---------------------------------------------");
	printEnd("|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|");
	printEnd("---------------------------------------------");
	i = 0;
	while (i < 8)
	{
		if (!this->_contacts[i].isEmpty())
		{
			print("|");
			std::cout << std::setw(10) << (i + 1);
			print("|");
			printFill(this->_contacts[i].getFirstName(), 10);
			print("|");
			printFill(this->_contacts[i].getLastName(), 10);
			print("|");
			printFill(this->_contacts[i].getNickname(), 10);
			printEnd("|");
		}
		i++;
	}
	printEnd("");
	return ;
}

void	PhoneBook::displayContact(int index) {
	if (this->_contacts[index - 1].isEmpty())
		printEnd("Empty contact");
	else 
		this->_contacts[index - 1].display();
}
