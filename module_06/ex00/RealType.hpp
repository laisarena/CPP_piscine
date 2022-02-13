/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RealType.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:06:04 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/04 20:06:06 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_TYPE_HPP
# define REAL_TYPE_HPP

# include <iomanip>
# include "ScalarType.hpp"

class   RealType: public ScalarType
{
    private:
        bool    _set_precision;

        RealType(const RealType& object);
    
    public:
        RealType(void);
        RealType(const char* literal);
        RealType(const char* literal, bool setprecision);
        RealType(Pseudo pseudo);
        ~RealType(void);

        bool    getSetPrecision(void) const;
        void    setSetPrecision(bool setprecision);

        RealType&    operator=(const RealType& object);
};

std::ostream&   operator<<(std::ostream& output, const RealType& object);

#endif
