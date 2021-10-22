/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:49:36 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/21 03:14:55 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include <fstream>
//#include "File.hpp"

static void toUpper(char **stringPtr) {
	char	*string;
	char	c;

	string = *stringPtr;
	while (*string) {
		c = *string;
		if (c >= 'a' && c <= 'z')
			*string = c - 32;
		string++;
	}
}

static std::string	createOutputName(char *name) {
	toUpper(&name);
	std::string	outputName(name);
	outputName.append(".replace");
	return outputName;
}

static int	errorHandler( int numberOfArguments) {
	if (numberOfArguments == 4)
		return 0;
	std::cout << "This program takes 3 arguments: filename, s1 and s2:"
		<< std::endl;
	return -1;
}

int		main(int argc, char **argv)
{
	if (errorHandler(argc))
		return -1;

	std::ifstream	input(argv[1]);
	std::ofstream	output(createOutputName(argv[1]).c_str());


	std::string	line;
	std::string	s1(argv[2]);
	std::string	s2(argv[3]);
	std::size_t pos;
	while (input)
	{
		getline(input, line);
		pos = line.find(s1);
		if (pos != std::string::npos)
		{
			output << line.substr(0, pos);
			output << s2;
			output << line.substr(pos + s1.length(), line.length()) << std::endl;
		}
		else
		{
			if (!line.empty())
				output << line << std::endl;
		}
	}
	input.close();
	output.close();
	return 0;
}
