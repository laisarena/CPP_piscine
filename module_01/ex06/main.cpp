/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <laisarena@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:02:15 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/31 17:20:01 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

static int	getLevelIndex(std::string input, std::string *level)
{
	int	i;

	i = 0;
	while( i < 4 && input.compare(level[i]) )
		i++;
	return i;
}

static void	printKarenComplain(Karen &karen, std::string level) {
	std::cout << "[ " << level << " ]" << std::endl;
	karen.complain(level);
	std::cout  << std::endl;
}

static void	applyFilter(int i, std::string *level)
{
	Karen	karen = Karen();

	switch(i) {
		case 0:
			printKarenComplain(karen, level[i++]);
		case 1:
			printKarenComplain(karen, level[i++]);
		case 2:
			printKarenComplain(karen, level[i++]);
		case 3:
			printKarenComplain(karen, level[i++]);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
				<< std::endl;
	}
}

int	main(int argc, char **argv)
{
	int			i;
	std::string	level[4] = {"DEBUG", "INFO" ,"WARNING", "ERROR"};
	
	if(argc != 2)
		return -1;
	i = getLevelIndex(argv[1], level);
	applyFilter(i, level);
	return 0;
}
