/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:36:12 by lfrasson          #+#    #+#             */
/*   Updated: 2021/09/26 19:07:34 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.hpp"
#include <iomanip>

void	printFill(std::string message, int width) {
	if (message.size() > 10) {
		message = message.substr(0, 9);
		message = message.append(".");
	}
	std::cout << std::setw(width);
	std::cout << message;
	return ;
}

void	print(std::string message) {
	std::cout << message;
	return ;
}

void	printEnd(std::string message) {
	print(message);
	std::cout << std::endl;
	return ;
}

std::string	getInput(std::string message) {
	std::string	input;

	print(message);
	std::getline(std::cin, input);
	return (input);
}
