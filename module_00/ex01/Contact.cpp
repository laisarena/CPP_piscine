/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:38:22 by lfrasson          #+#    #+#             */
/*   Updated: 2021/09/29 14:12:24 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
	return ;
}

Contact::~Contact(void) {
	return ;
}

static void	printInformation(std::string field, std::string value) {
	print(field);
	printEnd(value);
}

void Contact::display(void) {
	printInformation("FIRST NAME: ", this->_firstName);
	printInformation("LAST NAME: ", this->_lastName);
	printInformation("NICKNAME: ", this->_nickname);
	printInformation("PHONE NUMBER: ", this->_phoneNumber);
	printInformation("DARKEST SECRET: ", this->_darkestSecret);
	return ;
}

bool Contact::isEmpty(void) {
	if (this->_firstName != "")
		return false;
	if (this->_lastName != "")
		return false;
	if (this->_nickname != "")
		return false;
	if (this->_phoneNumber != "")
		return false;
	if (this->_darkestSecret != "")
		return false;
	return true;
}

void Contact::setFirstName(std::string firstName) {
	this->_firstName = firstName;
	return ;
}

void Contact::setLastName(std::string lastName) {
	this->_lastName = lastName;
	return ;
}

void Contact::setNickname(std::string nickname) {
	this->_nickname = nickname;
	return ;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
	return ;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
	return ;
}

std::string Contact::getFirstName(void) const {
	return this->_firstName;
}

std::string Contact::getLastName(void) const {
	return this->_lastName;
}

std::string Contact::getNickname(void) const {
	return this->_nickname;
}

std::string Contact::getPhoneNumber(void) const {
	return this->_phoneNumber ;
}

std::string Contact::getDarkestSecret(void) const {
	return this->_darkestSecret;
}
