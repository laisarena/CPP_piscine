/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:38:16 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/02 20:38:18 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# define CHAR	0
# define INT    1
# define DOUBLE	2
# define FLOAT	3

# include <string>
# include <cctype>
# include <iostream>

class   Converter
{
    private:
        char*   _literal;
        int     _type;
        char    _char;
        int     _int;
        double  _double;
        float   _float;

        void    _fromChar(void);
        void    _fromInt(void);
        void    _fromDouble(void);
        void    _fromFloat(void);

        Converter(void);
        Converter(const Converter& object);
    
    public:
        Converter(char* literal, int type);
        ~Converter(void);

        void        show(void);        
        Converter&  operator=(const Converter& object);
};

#endif
