/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 02:01:18 by coder             #+#    #+#             */
/*   Updated: 2021/10/31 15:53:58 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H

# include <iostream>
# include <fstream>
# include <string>

void	replaceStringInFile(std::string	s1, std::string	s2,
							std::ifstream &input,std::ofstream &output);

#endif
