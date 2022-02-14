/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:18:48 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/11 11:18:51 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <iterator>
# include <algorithm>

class  NoOccurrenceIsFound: public std::exception
{
    public:
        virtual const char* what(void) const throw() {
            return "No occurrence is found.";
        }
};

template<typename T>
typename T::iterator    easyfind(T& container, int integer)
{
    typename T::iterator  it;
    
    it = std::find(container.begin(), container.end(), integer);
    if (it == container.end())
        throw NoOccurrenceIsFound();
    return it;
}

#endif
