/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:07:43 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 13:51:34 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called\n";
	this->type = "Generic animal";
}

Animal::Animal(const Animal& source_class)
{
	std::cout << "Animal copy constructor called\n";
	*this = source_class;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

std::string Animal::getType() const {return this->type;}

void Animal::makeSound() const
{
	std::cout << "*Generic animal sounds*\n";
}

Animal& Animal::operator=(const Animal& source_class)
{
	std::cout << "Copy assignment operator called.\n";
	if (this != &source_class)
	{
		this->type = source_class.type;
	}
	return (*this);
}