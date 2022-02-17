/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:37:40 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/14 11:37:44 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void):   _n(0)
{
    return;
}

Span::Span(unsigned int n): _n(n)
{
    _container.reserve(n);
}

Span::Span(const Span& object)
{
    *this = object;
}

Span::~Span(void)
{
    return;
}

void    Span::addNumber(int number)
{
    if (_container.size() == _container.capacity())
        throw FullException();
    _container.push_back(number);
}

void    Span::addNumber(std::vector<int>::iterator first,
                        std::vector<int>::iterator last)
{
    while (first != last)
    {
        addNumber(*first);
        first++;
    }
}

int     Span::shortestSpan(void) 
{
    if ( _container.empty() || _container.size() == 1)
        throw NoSpanException();
    
    std::sort(_container.begin(), _container.end());

    std::vector<int>::iterator first;
    std::vector<int>::iterator last;
    
    first = _container.begin();
    last = _container.end();
    --last;

    int diff;
    diff = *(first + 1) - *first;    
    
    int shortest = diff;
    while (first != last)
    {
        diff = *(first + 1) - *first;
        if (diff < shortest)
            shortest = diff; 
        first++;
    }
    return shortest;
}

int     Span::longestSpan(void) const
{
    int min;
    int max;

    if ( _container.empty() || _container.size() == 1)
        throw NoSpanException();
    min = *(std::min_element(_container.begin(),
                                _container.end()));
    max = *(std::max_element(_container.begin(),
                                _container.end()));
    return (max - min);
}

Span&   Span::operator=(const Span& object)
{
    _n = object._n;
    return *this;
}