/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:07:43 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 14:47:45 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called\n";
	this->type = "Dog";
	this->dog_brain = new Brain();
}

Dog::Dog(const Dog& source_class)
{
	std::cout << "Dog copy constructor called\n";
	*this = source_class;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
	delete this->dog_brain;
}

void Dog::makeSound() const
{
	std::cout << "*Woof Woof*\n";
}

Dog& Dog::operator=(const Dog& source_class)
{
	std::cout << "Copy assignment operator called.\n";
	if (this != &source_class)
	{
		this->type = source_class.type;
		this->dog_brain = new Brain(*source_class.dog_brain);
	}
	return (*this);
}