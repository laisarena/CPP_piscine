/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:16:42 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/03 15:16:44 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_HPP
# define CHAR_HPP

# include <cctype>
# include <iostream>
# include "Scalar.hpp"

class   Char: public Scalar
{
    private:
        unsigned char   _char;

        Char(const Char& object);

        bool    _willOverflow(long double value);
    
    public:
        Char(void);
        Char(char* literal);
        Char(int int_value);
        Char(float float_value);
        Char(double double_value);
        Char(Pseudo pseudo);
        ~Char(void);

        unsigned char   getChar(void) const;

        Char&   operator=(const Char& object);
};

std::ostream&   operator<<(std::ostream& output, const Char& object);

#endif
