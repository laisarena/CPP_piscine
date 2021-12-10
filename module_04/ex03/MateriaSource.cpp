/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:58:13 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/09 21:50:52 by lfrasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

int	MateriaSource::_storage_size = 4;

MateriaSource::MateriaSource(void)
{
	std::cout	<< "DEBUG: "
				<< "MateriaSource default constructor"
				<< std::endl;
	_initializeStorage();
	return;
}

MateriaSource::MateriaSource(MateriaSource &object)
{
	std::cout	<< "DEBUG: "
				<< "MateriaSource copy constructor"
				<< std::endl;
	_initializeStorage();
	*this = object; 
}

void	MateriaSource::_initializeStorage(void)
{
	for (int i = 0; i < _storage_size; i++)
		this->_learned_materia_storage[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "DEBUG: " << "MateriaSource destructor" << std::endl;
	for (int i = 0; i < _storage_size; i++)
		if (this->_learned_materia_storage[i])
			delete this->_learned_materia_storage[i];
	return;
}

void		MateriaSource::learnMateria(AMateria *materia) 
{
	for (int i = 0; i < _storage_size; i++)
	{
		if (!this->_learned_materia_storage[i])
		{
			this->_learned_materia_storage[i] = materia->clone();
			delete materia;
			std::cout	<< "DEBUG: "
						<< "MateriaSource learnMateria -> "
						<< materia->getType()
						<< std::endl;
			return;
		}
	}
	delete materia;
	std::cout	<< "This Materia Source has already learned 4 materias."
				<< std::endl;
	return;
}

AMateria*	MateriaSource::createMateria(std::string const &type) 
{
	for (int i = 0; i < _storage_size; i++)
		if (!this->_learned_materia_storage[i]->getType().compare(type))
			return this->_learned_materia_storage[i]->clone();
	return NULL;
}

MateriaSource	&MateriaSource::operator=(MateriaSource &right_side_object)
{
	for (int i = 0; i < _storage_size; i++)
		if (right_side_object._learned_materia_storage[i])
			this->_learned_materia_storage[i]
				= right_side_object._learned_materia_storage[i]->clone();
	return *this;
}
