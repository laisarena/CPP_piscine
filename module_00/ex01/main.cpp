/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:39:04 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/02 22:50:12 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp" 

static void	invalidCommand(std::string input) {
	std::cout << "\"" << input << "\""
		<< " is not a valid command." << std::endl;
}

static void	invalidIndex(std::string input) {
	std::cout << "\"" << input << "\""
		<< " is not a valid index." << std::endl;
}

static int validateIndex(std::string input) {
	int		index;
	char	c;

	if (input.size() != 1)
		return -1;
	c = input.front();
	index = c - '0';
	if (index > 0 && index < 9)
		return index;
	return -1;

}
static Contact getContactInformation(void)
{
	Contact		contact;

	contact.setFirstName(getInput("FIRST NAME: "));
	contact.setLastName(getInput("LAST NAME: "));
	contact.setNickname(getInput("NICKNAME: "));
	contact.setPhoneNumber(getInput("PHONE NUMBER: "));
	contact.setDarkestSecret(getInput("DARKEST SECRET: "));
	return contact;
}

static void	addContact(PhoneBook *phoneBook)
{
	Contact		contact;
	
	contact = getContactInformation();
	phoneBook->add(contact);
}

static void searchContact(PhoneBook phoneBook)
{
	int			index;
	std::string	input;
	
	if (phoneBook.isEmpty())
	{
		printEnd("The phonebook is empty ");
		return ;
	}
	phoneBook.displayContacts();
	input = getInput("INDEX: ");
	index = validateIndex(input);
	if (index != -1)
		phoneBook.displayContact(index);
	else
		invalidIndex(input);
}

int	main(void) {
	std::string	input;
	PhoneBook	phoneBook;

	printEnd(" --- WELCOME --- ");
	while (1) {
		input = getInput("> ");
		if (!input.compare("ADD"))
			addContact(&phoneBook);
		else if (!input.compare("SEARCH"))
			searchContact(phoneBook);
		else if (!input.compare(""))
			continue ;
		else if (!input.compare("EXIT"))
			break ;
		else
			invalidCommand(input);
	}
	return (0);
}
