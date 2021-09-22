/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:39:04 by lfrasson          #+#    #+#             */
/*   Updated: 2021/09/20 21:05:20 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

static void	print(std::string message) {
	std::cout << message;
}

static void	printEnd(std::string message) {
	print(message);
	std::cout << std::endl;
}

static void	invalidCommand(std::string input) {
	std::cout << "\"" << input << "\""
		<< " is not a valid command." << std::endl;
}

static std::string	getInput(std::string message)
{
	std::string	input;

	print(message);
	std::getline(std::cin, input);
	return (input);
}

static void	getContactInformation(void)
{
	std::string	input;

	input = getInput("FIRST NAME: ");
	input = getInput("LAST NAME: ");
	input = getInput("NICKNAME: ");
	input = getInput("PHONE NUMBER: ");
	input = getInput("DARKEST SECRET: ");
	//first_name;
	//last_name;
	////nickname;
	//phone_number;
	//darkest_secret;
}

static void	addContact(void)
{
	getContactInformation();
}

int	main(void) {
	std::string	input;

	printEnd(" --- WELCOME --- ");
	while (1) {
		input = getInput("");
		if (!input.compare("ADD"))
			addContact();
		else if (!input.compare("SEARCH"))
			continue ;
		else if (!input.compare(""))
			continue ;
		else if (!input.compare("EXIT"))
			break ;
		else
			invalidCommand(input);
	}
	return (0);
}
