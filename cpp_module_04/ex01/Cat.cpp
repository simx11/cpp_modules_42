/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:07:43 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 14:45:58 by shoffman         ###   ########.fr       */
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

void Cat::makeSound() const
{
	std::cout << "*Meow*\n";
}

Cat& Cat::operator=(const Cat& source_class)
{
	std::cout << "Copy assignment operator called.\n";
	if (this != &source_class)
	{
		this->type = source_class.type;
		this->cat_brain = new Brain (*source_class.cat_brain);
	}
	return (*this);
}