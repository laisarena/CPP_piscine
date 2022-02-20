/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:59:37 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/17 10:59:39 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T, typename container = std::deque<T> >
class MutantStack:  public std::stack<T, container>
{
    public:
        typedef typename container::iterator    iterator;
        
        MutantStack(void) {return;}
        
        MutantStack(const MutantStack& object) {
            *this = object;
        }
        
        ~MutantStack(void) {return;}

        iterator begin(void) {
            return this->c.begin();
        }

        iterator end(void) {
            return this->c.end();
        }
};

#endif