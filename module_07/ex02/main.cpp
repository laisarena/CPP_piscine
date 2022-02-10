/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:12:04 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/09 22:12:06 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

void    testDefaultConstructor(void)
{
    try
    {
        Array<int> a;
        std::cout << "size: " << a.size() << std::endl;
        std::cout << a[0] << std::endl;
    }
    catch (std::exception e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    testInitializeConstructor(void)
{
    try
    {
        Array<int> a(3);
        std::cout << "size: " << a.size() << std::endl;
        std::cout << a[0] << std::endl;
        std::cout << a[1] << std::endl;
        std::cout << a[2] << std::endl;
        std::cout << a[3] << std::endl;
    }
    catch (std::exception e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    testCopyConstructor(void)
{
    try
    {
        Array<int> a(3);
        std::cout << "size: " << a.size() << std::endl;
        a[0] = 25;
        a[1] = -30;
        a[2] = 100;
        std::cout << a[0] << std::endl;
        std::cout << a[1] << std::endl;
        std::cout << a[2] << std::endl;
        
        Array<int> b(a);
        std::cout << "size: " << b.size() << std::endl;
        std::cout << b[0] << std::endl;
        std::cout << b[1] << std::endl;
        std::cout << b[2] << std::endl;
    }
    catch (std::exception e)
    {
        std::cout << e.what() << std::endl;
    }
    
}

int main(void)
{
    testDefaultConstructor();
    testInitializeConstructor();
    testCopyConstructor();
    
    return 0;
}