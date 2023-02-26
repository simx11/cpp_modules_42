/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:07:43 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 13:57:23 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called\n";
	this->type = "Generic WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& source_class)
{
	std::cout << "WrongAnimal copy constructor called\n";
	*this = source_class;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}

std::string WrongAnimal::getType() const {return this->type;}

void WrongAnimal::makeSound() const
{
	std::cout << "*Generic WrongAnimal sounds*\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& source_class)
{
	std::cout << "Copy assignment operator called.\n";
	if (this != &source_class)
	{
		this->type = source_class.type;
	}
	return (*this);
}