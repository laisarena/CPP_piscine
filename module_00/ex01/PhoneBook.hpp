/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:43:17 by lfrasson          #+#    #+#             */
/*   Updated: 2021/10/26 20:58:03 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "util.hpp"
# include "Contact.hpp"

class PhoneBook {
private:
	Contact	_contacts[8];
	int		_oldest;

public:
	PhoneBook(void);
	~PhoneBook(void);

	void	add(Contact contact);
	void	displayContacts(void);
	void	displayContact(int index);
	bool	isEmpty(void);
};

#endif
