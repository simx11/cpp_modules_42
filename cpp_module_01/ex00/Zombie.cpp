/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:53:53 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/17 19:25:37 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie created.\n";
}

Zombie::~Zombie()
{
	std::cout << this->getName() << " got destroyed.\n";
}

std::string Zombie::getName() const		{return this->name;}

void Zombie::setName(std::string str)	 {this->name = str;}

void Zombie::announce()
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ...\n";
}