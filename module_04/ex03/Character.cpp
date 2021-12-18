/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:04:08 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/15 21:56:10 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int	Character::_inventory_size = 4;

Character::Character(void)
{
	std::cout	<< "DEBUG: "
				<< "Character default constructor"
				<< std::endl;
	this->_name = "Fulano";
	_initializeInventory();
}

Character::Character(std::string name)
{
	std::cout	<< "DEBUG: "
				<< "Character named constructor -> "
				<< name << std::endl;
	this->_name = name;
	_initializeInventory();
}

void	Character::_initializeInventory(void)
{
	for (int i = 0; i < _inventory_size; i++)
		this->_materia[i] = NULL;
}

Character::Character(Character const &object)
{
	std::cout	<< "DEBUG: "
				<< "Character copy constructor"
				<< std::endl;
	*this = object;
}

Character::~Character()
{
	std::cout	<< "DEBUG: "
				<< "Character destructor"
				<< std::endl;
	return;
}

Character	&Character::operator=(Character const &right_side_object)
{
	this->_name = right_side_object.getName();
	for (int i = 0; i < _inventory_size; i++)
		if (right_side_object._materia[i])
			this->_materia[i] = right_side_object._materia[i]->clone();
	return *this;
}

std::string const	&Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < _inventory_size; i++)
	{
		if (!this->_materia[i])
		{
			this->_materia[i] = m;
			return;
		}
	}
}

bool	Character::_invalid_index(int idx)
{
	if (idx < _inventory_size && idx >= 0)
		return false;
	std::cout << "Invalid inventory index."<< std::endl;
	return true;
}

void	Character::unequip(int idx)
{
	if (_invalid_index(idx))
		return;
	if (this->_materia[idx])
		this->_materia[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (_invalid_index(idx))
		return;
	if (!this->_materia[idx])
		return;
	this->_materia[idx]->use(target);
}
