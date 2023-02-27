/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:07:43 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/27 15:27:47 by shoffman         ###   ########.fr       */
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

Brain *Dog::getBrain() const
{
	return this->dog_brain;
}

void Dog::makeSound() const
{
	std::cout << "*Woof Woof*\n";
}

Animal& Dog::operator=(const Animal& source_class)
{
	const Dog *dog_pointer = dynamic_cast<const Dog*>(&source_class);
	if(dog_pointer == NULL)
	{
		std::cout << "Dynamic cast error.\n";
		return (*this);
	}
	if (this != &source_class)
	{
		this->type = dog_pointer->type;
		*this->dog_brain = *dog_pointer->dog_brain;
	}
	return (*this);
}