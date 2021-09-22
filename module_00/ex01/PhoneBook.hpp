/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:43:17 by lfrasson          #+#    #+#             */
/*   Updated: 2021/09/21 18:24:44 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"
# include <string>
# include <iostream>

class PhoneBook {

public:
	
	Contact	Contacts[8];

	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);
	void	search(void);
	void	exit(void);
};

#endif
