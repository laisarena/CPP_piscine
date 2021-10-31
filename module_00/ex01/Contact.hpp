/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:03:03 by lfrasson          #+#    #+#             */
/*   Updated: 2021/09/25 17:09:47 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include "util.hpp"

class Contact {

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string _darkestSecret;
	
public:
	Contact(void);
	~Contact(void);

	void display(void);
	bool isEmpty(void);
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickname(std::string nickname);
	void setPhoneNumber(std::string phoneNumber);
	void setDarkestSecret(std::string dasrkestSecreat);
	std::string getLastName(void) const;
	std::string getFirstName(void) const;
	std::string getNickname(void) const;
	std::string getPhoneNumber(void) const;
	std::string getDarkestSecret(void) const;
};

#endif
