/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:06:04 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/04 20:06:06 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOAT_HPP
# define FLOAT_HPP

# include <cctype>
# include <iostream>
# include <iomanip>
# include "Scalar.hpp"

class   Float: public Scalar
{
    private:
        float   _float;
        bool    _set_precision;

        Float(const Float& object);

        bool    _willOverflow(long double value);
    
    public:
        Float(void);
        Float(char* literal);
        Float(char c);
        Float(int int_value);
        Float(double double_value);
        ~Float(void);

        float   getFloat(void) const;
        bool    getPrecision(void) const;

        Float&    operator=(const Float& object);
};

std::ostream&   operator<<(std::ostream& output, const Float& object);

#endif
