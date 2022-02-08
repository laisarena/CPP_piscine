/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:58:44 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/03 15:58:46 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT_HPP
# define INT_HPP

# include <cctype>
# include <iostream>
# include "Scalar.hpp"

class   Int: public Scalar
{
    private:
        int _int;

        Int(const Int& object);

        bool    _willOverflow(long double value);
    
    public:
        Int(void);
        Int(char* literal);
        Int(unsigned char c);
        Int(float float_value);
        Int(double double_value);
        Int(Pseudo pseudo);
        ~Int(void);

        int getInt(void) const;

        Int&    operator=(const Int& object);
};

std::ostream&   operator<<(std::ostream& output, const Int& object);

#endif
