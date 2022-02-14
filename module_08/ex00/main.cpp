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
#include <vector>
#include <list>
#include "easyfind.hpp"

template <typename T>
void   createContainer(T& container)
{
    container.push_back(2);
    container.push_back(6);
    container.push_back(4);
    container.push_back(7);
    container.push_back(1);
    container.push_back(6);
}

template <typename T, typename U>
void    test(T& container, U& iterator, std::string name)
{
    try {
        std::cout << std::endl << "---- " << name << " ----" << std::endl << std::endl;
        createContainer(container);
        std::cout << "Try find int 4" << std::endl;
        iterator = easyfind(container, 4);
        std::cout << "Value found: " << *iterator << std::endl;
        std::cout << "Try find int 10" << std::endl;
        easyfind(container, 10);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

int main(void)
{
    std::vector<int>            vector;
    std::vector<int>::iterator  vector_iterator;
    test(vector, vector_iterator, "VECTOR");
    
    std::list<int>              list;
    std::list<int>::iterator    list_iterator;
    test(list, list_iterator, "LIST");
    
    return 0;
}