/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:57:56 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/20 13:58:22 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str)
{
	this->name = str;
	std::cout << "HumanB named " << this->name << " got created\n";
}

HumanB::~HumanB()
{
	//empty
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon_b = &weapon;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon_b->getType() << "\n";
}