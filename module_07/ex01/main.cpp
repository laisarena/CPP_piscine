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
#include "iter.hpp"

void toUpper(char& c)
{
    if (c >= 'a' && c <= 'z')
        c = c - 32;
}

void    testWithCharArray(void)
{
    char    array[3] = {'a' , 'b', 'c'};

    iter<char>(array, 3, &toUpper);
    
    std::cout << "TO UPPER" << std::endl;
    for (int i = 0; i < 3; i++)
        std::cout << array[i] << std::endl;

}
template<typename T>
void square(T& value)
{
    value = value * value;
}

void    testWithFloatArray(void)
{
    float   array[2] = {1.1f , 4.0f};

    iter<float>(array, 2, &square<float>);
    
    std::cout << "SQUARE" << std::endl;
    for (int i = 0; i < 2; i++)
        std::cout << array[i] << std::endl;

}

int main(void)
{

    testWithCharArray();
    testWithFloatArray();
    return 0;
}