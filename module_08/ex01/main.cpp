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
#include "Span.hpp"

static int randomNumber(void)
{
    return std::rand()%10000;
}

static std::vector<int> createVectorWithRandomNumbers(int size)
{
    std::vector<int>    vector(size);
    
    std::srand(std::time(NULL));
    std::generate (vector.begin(), vector.end(), randomNumber);
    return vector;
}

static void   largeTest(int size)
{

    Span    span(size);
    
    std::cout << "--- LARGE TESTE ---" << std::endl;
    std::vector<int> vector = createVectorWithRandomNumbers(size);
    span.addNumber(vector.begin(), vector.end());
    std::cout << "Shortest span:\t" << span.shortestSpan() << std::endl;
    std::cout << "Largest span:\t" << span.longestSpan() << std::endl;
    std::cout << std::endl;
}

static void    oneElementSpanTest(void)
{
    Span span(3);
    span.addNumber(6);

    std::cout << "--- ONE ELEMENT SPAN TEST ---" << std::endl;
    try {
        std::cout << "Shortest span:\t" << span.shortestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        std::cout << "Largest span:\t" << span.longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

}

static void    emptySpanTest(void)
{
    Span span(3);

    std::cout << "--- EMPTY SPAN TEST ---" << std::endl;
    try {
        std::cout << "Shortest span:\t" << span.shortestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        std::cout << "Largest span:\t" << span.longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
}

static void    simpleTest(void)
{
    Span span(5);

    try {
        std::cout << "--- SIMPLE TESTE ---" << std::endl;
        span.addNumber(6);
        span.addNumber(3);
        span.addNumber(17);
        span.addNumber(9);
        span.addNumber(11);
        std::cout << "Shortest span:\t" << span.shortestSpan() << std::endl;
        std::cout << "Largest span:\t" << span.longestSpan() << std::endl;
        std::cout << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

int main(void)
{
    simpleTest();
    emptySpanTest();
    oneElementSpanTest();
    largeTest(50000);
    return 0;
}