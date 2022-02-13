/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntegerType.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:34:01 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/03 15:34:03 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_TYPE_HPP
# define INTEGER_TYPE_HPP

# include <climits>
# include "ScalarType.hpp"

class   IntegerType:    public ScalarType
{
    private:
        bool        _impossible;

        IntegerType(const IntegerType& object);
    
        virtual bool    _willOverflow(long double value) = 0;

    public:
        IntegerType(void);
        IntegerType(const char* literal);
        IntegerType(Pseudo pseudo);
        ~IntegerType(void);

        bool        getImpossible() const;
        void        setImpossible(bool impossible);

        IntegerType&  operator=(const IntegerType& object);
};

#endif
