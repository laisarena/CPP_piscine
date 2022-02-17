/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:39:36 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/14 11:39:38 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int        _n;
        std::vector<int>    _container;

        void    _checkIfIsPossibleCalculateDistance(void) const;
        void    _sortContainer(void);
    
    public:
        Span(void);
        Span(unsigned int n);
        Span(const Span& object);
        ~Span(void);

        void    addNumber(int number);
        void    addNumber(std::vector<int>::iterator first,
                            std::vector<int>::iterator last);
        int     shortestSpan(void);
        int     longestSpan(void) const;

        Span&   operator=(const Span& object);

        class FullException: public std::exception
        {
            public:
                const char* what(void) const throw() {
                    return "The Span is full.";
                }
        };
        
        class NoSpanException: public std::exception
        {
            public:
                const char* what(void) const throw() {
                    return "No span can be found";
                }
        };
};

# endif