/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:41:19 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/27 13:47:11 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called\n";
}


Brain::Brain(const Brain& source_class)
{
	std::cout << "Copy constructor called\n";
	*this = source_class;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

void Brain::printIdeas() const
{
	for(int i = 0; i < 100; i++)
	{
		if(!this->ideas[i].empty())
			std::cout << this->ideas[i] << std::endl;
		else
			return;
	}
}

void Brain::printIdeas(int index) const
{
	if(!this->ideas[index].empty())
			std::cout << this->ideas[index] << std::endl;
}

void Brain::setIdea(int index, std::string str)
{
	this->ideas[index] = str;
}

Brain& Brain::operator=(const Brain& source_class)
{
	std::cout << "Copy Brain called.\n";
	if (this != &source_class)
	{
		for(int i = 0; i < 100; i++)
			this->ideas[i] = source_class.ideas[i];
	}
	return (*this);
}