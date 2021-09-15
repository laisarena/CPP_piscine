/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:39:00 by lfrasson          #+#    #+#             */
/*   Updated: 2021/09/14 21:40:08 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define	MESSAGE	"* LOUD AND UNBEARABLE FEEDBACK NOISE *"

static char toUppercase(char c) {
	if (c >= 'a' && c < 'z')
		return (c - 32);
	return (c);
}

static void	printChar(char c) {
	std::cout << toUppercase(c);
}

static void	printArgument(char *argument) {
	while (*argument)
	{
		printChar(*argument);
		argument++;
	}
}

static void	printUppercaseMessage(char **argv) {
	while (*argv)
	{
		printArgument(*argv);
		argv++;
		if (*argv)
			std::cout << " ";
	}
	std::cout << std::endl;
}

static void	printNoInputMessage(int argc) {
	if (argc != 1)
		return ;
	std::cout << MESSAGE << std::endl;
}

int	main(int argc, char **argv) {
	printNoInputMessage(argc);
	printUppercaseMessage(argv + 1);
	return (0);
}
