/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:15:55 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/09 22:15:57 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

template<typename T>
void   swap(T& a, T& b)
{
    T   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T   min(const T& a, const T& b)
{
    if (b < a)
        return b;
    return a;
}

template<typename T>
T   max(const T& a, const T& b)
{
    if (a > b)
        return a;
    return b;
}
#endif
