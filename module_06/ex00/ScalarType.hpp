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
# include <climits>
# include "Pseudo.hpp"

class   ScalarType
{
    private:
        const char* _literal;
        bool        _impossible;
        Pseudo      _pseudo;

        ScalarType(const ScalarType& object);
    
        virtual bool    _willOverflow(long double value) = 0;

    public:
        ScalarType(void);
        ScalarType(const char* literal);
        ScalarType(Pseudo pseudo);
        ~ScalarType(void);

        const char* getLiteral() const;
        bool        getImpossible() const;
        Pseudo      getPseudo() const;
        void        setImpossible(bool impossible);
        void        setPseudo(Pseudo pseudo);

        bool        isPseudo() const;

        ScalarType&  operator=(const ScalarType& object);
};

#endif
