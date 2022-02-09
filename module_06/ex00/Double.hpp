/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:08:26 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/05 11:08:27 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLE_HPP
# define DOUBLE_HPP

# include <cctype>
# include <iostream>
# include <iomanip>
# include "Scalar.hpp"

class   Double: public Scalar
{
    private:
        double  _double;
        bool    _set_precision;

        Double(const Double& object);

        bool    _willOverflow(long double value);
    
    public:
        Double(void);
        Double(char* literal);
        Double(char c);
        Double(int int_value);
        Double(float float_value);
        Double(Pseudo pseudo);
        ~Double(void);

        double  getDouble(void) const;
        bool    getPrecision(void) const;

        Double&    operator=(const Double& object);
};

std::ostream&   operator<<(std::ostream& output, const Double& object);

#endif
