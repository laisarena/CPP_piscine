/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:49:36 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/31 17:44:56 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

static int	errorHandler(int numberOfArguments)
{
	if (numberOfArguments == 4)
		return 0;
	std::cout << "This program takes 3 arguments: filename, s1 and s2:"
		<< std::endl;
	return -1;
}

static void toUpper(char **stringPtr)
{
	char	*string;

	string = *stringPtr;
	while (*string) {
		*string = std::toupper(*string);
		string++;
	}
}

static std::string	createOutputName(char *name)
{
	toUpper(&name);
	std::string	outputName(name);
	outputName.append(".replace");
	return outputName;
}

static int openFiles(std::ifstream &input,  std::ofstream &output, char *name)
{
	input.open(name);
	if (!input.is_open())
	{
		std::cout << "Could not open file \"" << name << "\""<< std::endl;
		return -1;
	}
	output.open(createOutputName(name).c_str());
	return 0;
}

static void	closeFiles(std::ifstream &input,std::ofstream &output)
{
	input.close();
	output.close();
}

int		main(int argc, char **argv)
{
	if (errorHandler(argc))
		return -1;

	std::ifstream	input;
	std::ofstream	output;
	
	if (openFiles(input, output, argv[1]))
		return -1;
	replaceStringInFile(argv[2], argv[3], input, output);
	closeFiles(input, output);
	return 0;
}
