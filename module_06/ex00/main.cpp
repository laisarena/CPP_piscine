/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:38:02 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/02 20:38:08 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>
#include <cctype>
#include "Converter.hpp" 

class	InputException:	public std::exception
{
	public:
		const char* what(void) const throw() {
			return "Error: This program accepts only one parameter";
		}
};

class	TypeException:	public std::exception
{
	public:
		const char* what(void) const throw() {
			return "Error: The input is not a scalar type";
		}
};

static void	checkNumberOfParameters(int argc)
{
	if (argc != 2)
		throw InputException();
}

static bool	isChar(std::string input)
{
	if (input.size() != 1)
		return false;

	char c = *input.c_str();
	if (!isgraph(c))
		return false;
	if (isdigit(c))
		return false;
	return true;
}

static bool isNumeric(const char* input)
{
	if (!(*input))
		return false;
	while (*input)
	{
		if (!isdigit(*input))
			return false;
		input++;
	}
	return true;
}

static bool	firstCharIsSign(const char* input)
{
	if (*input == '-')
		return true;
	return false;
}

static bool	isInt(const char* input)
{
	if (firstCharIsSign(input))
		input++;
	if (isNumeric(input))
		return true;
	return false;
}

static bool	isDouble(std::string input)
{
	int pos = input.find('.');
	if (pos == -1)
		return false;

	std::string inteira = input.substr(0, pos);
	std::string decimal = input.substr(pos + 1, input.size());

	if (isInt(inteira.c_str()) && isNumeric(decimal.c_str()))
		return true;
	return false;
}

static bool	isFloat(std::string input)
{
	if (input[input.size() - 1] != 'f')
		return false;
	return(isDouble(input.substr(0, input.size() - 1)));
}

static int	detectType(char* input)
{
	if (isChar(input))
		return CHAR;
	else if (isInt(input))
		return INT;
	else if (isDouble(input))
		return DOUBLE;
	else if (isFloat(input))
		return FLOAT;
	throw TypeException();
}

int	main(int argc, char** argv)
{
	try {
		checkNumberOfParameters(argc);
		int type = detectType(argv[1]);
		Converter converter(argv[1], type);
		converter.show();
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl; 
		return -1;
	}
	return 0;
}
