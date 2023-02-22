/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:06:41 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/20 09:49:45 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
	this->name = str;
	std::cout << this->name << " got created.\n";
}

Zombie::Zombie()
{
	//nothing
}

Zombie::~Zombie()
{
	std::cout << this->name << " got destroyed.\n";
}

std::string Zombie::getName() const 	{return this->name;}

void Zombie::setName(std::string str)	{this->name = str;}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}