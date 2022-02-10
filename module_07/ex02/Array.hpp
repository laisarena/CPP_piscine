/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 09:11:27 by lfrasson          #+#    #+#             */
/*   Updated: 2022/02/10 09:11:30 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
    private:
        unsigned int    _n;
        T*              _pointer;
    
    public:
        Array<T>(void): _n(0),
                        _pointer(NULL)
        { return; };

        Array<T>(unsigned int n):   _n(n),
                                    _pointer(new T[_n]())
        { return; };

        Array<T>(const Array<T>& object)
        { *this = object; };

        ~Array<T>(void)
        {
            if (_n)
                delete [] _pointer;
        };

        unsigned int    size(void) const
        { return _n; };

        Array<T>&  operator=(const Array<T>& object)
        {
            this->_n = object._n;
            if (_n == 0)
            {
                this->_pointer = NULL;
                return *this;
            }
            this->_pointer = new T[_n]();
            for (unsigned int i = 0; i < _n; i++)
                this->_pointer[i] = object[i];
            return *this;
        };

        T&      operator[](unsigned int index) const
        {
            if (index >= _n)
                throw std::exception();
            return _pointer[index];
        };
};

#endif
