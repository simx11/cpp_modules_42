/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:29:05 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 10:52:03 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called\n";
	this->name = "Noname";
	this->health = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string str)
{
	std::cout << "ClapTrap parametric constructor called\n";
	this->name = str;
	this->health = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& source_class)
{
	std::cout << "Copy constructor called\n";
	*this = source_class;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
	if(this->energy_points < 1)
	{
		std::cout << "ClapTrap " << this->name << " has no energy points to attack.\n";
		return;
	}	
	if(health < 1)
	{
		std::cout << "ClapTrap " << this->name << " is dead.\n";
		return;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target;
	std::cout << ", causing " << this->attack_damage << " points of damage!\n";
	this->energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->health <= (int)amount || this->health < 1)
	{
		std::cout << "ClapTrap " << name << " is dead.\n";
		this->health -= amount;
		return;
	}	
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!\n";
	this->health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(energy_points < 1)
	{
		std::cout << "ClapTrap " << this->name << "has no energy points to repair itself.\n";
		return;
	}
	if(health < 1)
	{
		std::cout << "ClapTrap " << this->name << " is dead.\n";
		return;
	}
	std::cout << "ClapTrap " << this->name << " has regained " << amount << " points of health.\n";
	this->health += amount;	
	this->energy_points--;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& source_class)
{
	std::cout << "Copy assignment operator called.\n";
	if (this != &source_class)
	{
		this->name = source_class.name;
		this->health = source_class.health;
		this->energy_points = source_class.energy_points;
		this->attack_damage = source_class.attack_damage;
	}
	return (*this);
}