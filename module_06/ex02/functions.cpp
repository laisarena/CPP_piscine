/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:27:39 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/09 18:27:40 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

Base*   generate(void)
{
    int randon;
    
    srand (time(NULL));
	randon = rand() % 3;
    
    switch (randon)
    {
        case 0:
            std::cout << "Generate A" << std::endl;
            return new A;
        case 1:
            std::cout << "Generate B" << std::endl;
            return new B;
        case 2:
            std::cout << "Generate C" << std::endl;
            return new C;
        default:
            return NULL;
    }
}

void    identify(Base* p)
{
    A* a = dynamic_cast<A*>(p);
    B* b = dynamic_cast<B*>(p);
    C* c = dynamic_cast<C*>(p);
    
    if (a)
        std::cout << "A" << std::endl;
    else if (b)
        std::cout << "B" << std::endl;
    else if (c)
        std::cout << "C" << std::endl;
}

void    identify(Base& p)
{
    try {
        A a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::bad_cast e)
    {
        try {
            B b = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch (std::bad_cast e)
        {
            C c = dynamic_cast<C&>(p);
            std::cout << "C" << std::endl;
        }
    }
}