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

class   Scalar
{
    private:
        Scalar(const Scalar& object);
    
    protected:
        const char* _literal;

    public:
        Scalar(void);
        Scalar(const char* literal);
        ~Scalar(void);

        const char* getLiteral() const;

        Scalar&  operator=(const Scalar& object);
};

#endif
