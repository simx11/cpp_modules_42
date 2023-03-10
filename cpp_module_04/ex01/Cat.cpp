/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:07:43 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/27 15:27:44 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called\n";
	this->type = "Cat";
	this->cat_brain = new Brain();
}

Cat::Cat(const Cat& source_class)
{
	std::cout << "Cat copy constructor called\n";
	*this = source_class;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
	delete this->cat_brain;
}

Brain *Cat::getBrain() const
{
	return this->cat_brain;
}

void Cat::makeSound() const
{
	std::cout << "*Meow*\n";
}

Animal& Cat::operator=(const Animal& source_class)
{
	const Cat *cat_pointer = dynamic_cast<const Cat*>(&source_class);
	if(cat_pointer == NULL)
	{
		std::cout << "Dynamic cast error.\n";
		return (*this);
	}
	if (this != &source_class)
	{
		this->type = cat_pointer->type;
		*this->cat_brain = *cat_pointer->cat_brain;
	}
	return (*this);
}