/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:34:01 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/03 15:34:03 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_TYPE_HPP
# define SCALAR_TYPE_HPP

# include <cctype>
# include <iostream>

class   ScalarType
{
    private:
        const char* _literal;

        ScalarType(const ScalarType& object);
    
    public:
        ScalarType(void);
        ScalarType(const char* literal);
        ~ScalarType(void);

        const char* getLiteral() const;

        ScalarType&  operator=(const ScalarType& object);
};

#endif
