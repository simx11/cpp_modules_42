/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:41:19 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 14:41:20 by shoffman         ###   ########.fr       */
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