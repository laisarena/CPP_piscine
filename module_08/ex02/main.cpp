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
#include <list>
#include "MutantStack.hpp"

static void testMemberFunctions(std::stack<int> stack, std::string type)
{
    std::cout << "--- TESTE MERBER FUNCTIONS --- " << type << std::endl << std::endl;

    std::cout << "EMPTY ->\t" << stack.empty() << std::endl;
    std::cout << "SIZE ->\t\t" << stack.size() << std::endl;
    std::cout << "* PUSH 42" << std::endl;
    stack.push(42);
    std::cout << "EMPTY ->\t" << stack.empty() << std::endl;
    std::cout << "SIZE ->\t\t" << stack.size() << std::endl;
    std::cout << "TOP ->\t\t" <<stack.top() << std::endl;
    std::cout << "* PUSH 21" << std::endl;
    stack.push(21);
    std::cout << "EMPTY ->\t" << stack.empty() << std::endl;
    std::cout << "SIZE ->\t\t" << stack.size() << std::endl;
    std::cout << "TOP ->\t\t" <<stack.top() << std::endl;
    std::cout << "* PUSH 21" << std::endl;
    std::cout << "* POP" << std::endl;
    stack.pop();
    std::cout << "EMPTY ->\t" << stack.empty() << std::endl;
    std::cout << "SIZE ->\t\t" << stack.size() << std::endl;
    std::cout << "TOP ->\t\t" <<stack.top() << std::endl;

    std::cout << std::endl;
}

static void compareWithList(void)
{
    std::cout << "--- SIMPLE TESTE --- LIST" << std::endl << std::endl;
    
    std::list<int> list;
    
    list.push_back(5);
    list.push_back(17);
    std::cout << list.back() << std::endl;
    list.pop_back();
    std::cout << list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);

    std::cout << std::endl << "Print elements:" << std::endl;
    std::list<int>::iterator it = list.begin();
    std::list<int>::iterator ite = list.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << std::endl;
}

static void    simpleTest(void)
{
    std::cout << "--- SIMPLE TESTE --- MUTANT" << std::endl << std::endl;
    
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << std::endl << "Print elements:" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << std::endl;
}

int main(void)
{
    MutantStack<int>    mstack;
    std::stack<int>     stack;

    testMemberFunctions(stack, "ORIGINAL");
    testMemberFunctions(mstack, "MUTANT");
    simpleTest();
    compareWithList();
    return 0;
}