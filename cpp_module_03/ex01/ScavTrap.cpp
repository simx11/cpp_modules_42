/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:29:05 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/24 18:21:44 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor called\n";
	this->name = "Noname";
	this->health = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string str)
{
	std::cout << "Parametric constructor called\n";
	this->name = str;
	this->health = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& source_class)
{
	std::cout << "Copy constructor called\n";
	*this = source_class;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called\n";
}

void ScavTrap::attack(const std::string& target)
{
	if(energy_points < 1)
	{
		std::cout << "ScavTrap " << name << " has no energy points to attack.\n";
		return;
	}	
	if(health < 1)
	{
		std::cout << "ScavTrap " << name << " is dead.\n";
		return;
	}
	std::cout << "ScavTrap " << name << " attacks " << target;
	std::cout << ", causing " << attack_damage << " points of damage!\n";
	energy_points--;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if(health <= (int)amount || health < 1)
	{
		std::cout << "ScavTrap " << name << " is dead.\n";
		health -= amount;
		return;
	}	
	std::cout << "ScavTrap " << name << " takes " << amount << " points of damage!\n";
	health -= amount;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if(energy_points < 1)
	{
		std::cout << "ScavTrap " << name << "has no energy points to repair itself.\n";
		return;
	}
	if(health < 1)
	{
		std::cout << "ScavTrap " << name << " is dead.\n";
		return;
	}
	std::cout << "ScavTrap " << name << " has regained " << amount << " points of health.\n";
	health += amount;	
	energy_points--;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& source_class)
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