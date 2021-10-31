/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 01:53:15 by coder             #+#    #+#             */
/*   Updated: 2021/10/31 15:56:16 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

static std::string	replaceString(std::string line,
									std::string s1, std::string s2)
{
	std::size_t pos;
	
	pos = line.find(s1);
	if (pos == std::string::npos)
		return line;
	
	std::string	newLine;
	
	newLine = line.substr(0, pos);
	newLine.append(s2);
	newLine.append(line.substr(pos + s1.length(), line.length()));
	newLine = replaceString(newLine, s1, s2);
	return newLine;
}

void	replaceStringInFile(std::string	s1, std::string	s2,
							std::ifstream &input, std::ofstream &output)
{
	std::string	line;
	
	while (input)
	{
		std::getline(input, line);
		line = replaceString(line, s1, s2);
		if (!line.empty())
			output << line << std::endl;
	}
}
