/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:43:17 by lfrasson          #+#    #+#             */
/*   Updated: 2021/09/29 16:06:28 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "util.hpp"
# include "Contact.hpp"

class PhoneBook {

public:
	Contact	contacts[8];
	int		oldest;	

	PhoneBook(void);
	~PhoneBook(void);

	void	add(Contact contact);
	void	displayContacts(void);
	void	displayContact(int index);
	void	search(void);
	void	exit(void);
};

#endif
