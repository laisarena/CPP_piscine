/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrasson <lfrasson@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:17:20 by lfrasson          #+#    #+#             */
/*   Updated: 2021/12/18 17:43:18 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

static std::string *toString (int number)
{
	std::string *string = new std::string();
	while (number / 10)
	{
		string->insert(0, 1, number % 10 + '0');
		number /= 10;
	}
	string->insert(0, 1, number % 10 + '0');
	return string;

}

Brain::Brain(void)
{

	for (int i = 0; i < 100; i++)
	{
		std::string *number = toString(i);
		this->_ideas[i] = std::string("Idea ").append(*number);
		delete number;
	}
	std::cout	<< "Constructed Brain"
				<< std::endl;
}

Brain::Brain(Brain const &object)
{
	*this = object;
	std::cout	<< "Constructed Brain with copy" << std::endl;
}

Brain::~Brain(void) {
	std::cout	<< "Destroyed Brain" << std::endl;
}

Brain	&Brain::operator=(Brain const &right_side_object)
{
	std::string	const *ideas;

	ideas = right_side_object.getIdeas();
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas[i];
	return *this;
}

std::ostream & operator<<(std::ostream &output, Brain const &rightSideObject)
{
	output	<< "Brain ideas:"
			<< rightSideObject.getIdeas()
			<< std::endl;
	return output;
}

void	Brain::setIdeas(std::string *ideas)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas[i];
}

std::string	const *Brain::getIdeas(void) const
{
	return this->_ideas;
}

void	Brain::makeSound(void) const
{
	std::cout << "* ANIMAL SOUND *" << std::endl;
}
