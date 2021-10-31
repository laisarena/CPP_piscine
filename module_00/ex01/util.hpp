/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:36:33 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/26 20:57:15 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

# include <iostream>
# include <string>
# include <iomanip>

void		print(std::string message);
void		printEnd(std::string message);
void		printFill(std::string message, int width);
std::string	getInput(std::string message);

#endif
