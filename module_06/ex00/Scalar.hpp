/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:34:01 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/03 15:34:03 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <cctype>
# include <iostream>
# include <climits>

class   Scalar
{
    private:
        const char* _literal;
        bool        _impossible;
        Scalar(const Scalar& object);
    
        virtual bool    _willOverflow(long double value) = 0;

    public:
        Scalar(void);
        Scalar(const char* literal);
        ~Scalar(void);

        const char* getLiteral() const;
        bool        getImpossible() const;
        void        setImpossible(bool impossible);

        Scalar&  operator=(const Scalar& object);
};

#endif
