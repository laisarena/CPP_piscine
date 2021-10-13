/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:49:36 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/13 19:08:59 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Arguments.hpp"

static int	errorHandler( int numberOfArguments) {
	if ( numberOfArguments == 4)
		return ( 0 );
	std::cout << "This program takes 3 arguments: filename, s1 and s2:"
		<< std::endl;
	return ( -1 );
}

int		main( int argc, char **argv ) {
	if ( errorHandler( argc ))
		return ( -1 );
	
	Arguments arg(argv[1], argv[2], argv[3]);
	
	std::ifstream	inputFile( arg.getInputName() );
	
	std::ofstream	outputFile( arg.getOutputName() );
	outputFile << "teste";
	outputFile.close();

	//while (!string.empty())
	//{
	//	inputFile >> string;
	//}
	return ( 0 );
}
