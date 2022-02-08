/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pseudo.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:24:43 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/07 16:24:46 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSEUDO_HPP
# define PSEUDO_HPP

# define NOT_A_NUM  1
# define PLUS_INF   2
# define MINUS_INF  3

# include <iostream>

class   Pseudo
{
    private:
        int _pseudo;

    public:
        Pseudo(void);
        Pseudo(std::string literal);
        Pseudo(const Pseudo& object);
        ~Pseudo(void);

        int getPseudo(void) const;

        Pseudo&   operator=(const Pseudo& object);
};

std::ostream&   operator<<(std::ostream& output, const Pseudo& object);

#endif
