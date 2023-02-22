/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:59:19 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/20 13:53:52 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &weapon) : name(str), weapon_a(weapon)
{
	this->name = str;
	this->weapon_a = weapon;
	std::cout << "HumanA named " << this->name << " got created, and received " << this->weapon_a.getType() << "\n";
	
}

HumanA::~HumanA()
{
	//empty
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon_a.getType() << "\n";
}