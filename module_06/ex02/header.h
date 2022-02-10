/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:35:50 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/09 20:35:52 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <cstdlib>
# include <ctime>
# include <iostream>
# include "header.h"

class Base { public: virtual ~Base(void){}};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base*   generate(void);
void    identify(Base* p);
void    identify(Base& p);

#endif