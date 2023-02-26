/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:29:05 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 11:20:50 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap efault constructor called\n";
	this->type = "ScavTrap";
	this->name = "Noname";
	this->health = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string str)
{
	std::cout << "ScavTrap parametric constructor called\n";
	this->type = "SvacTrap";
	this->name = str;
	this->health = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& source_class)
{
	std::cout << "ScavTrap copy constructor called\n";
	*this = source_class;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}

void ScavTrap::guardGate()
{
	std::cout << this->type << " " << this->name << " is now in gate keeper mode.\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& source_class)
{
	std::cout << "Copy assignment operator called.\n";
	if (this != &source_class)
	{
		this->type = source_class.type;
		this->name = source_class.name;
		this->health = source_class.health;
		this->energy_points = source_class.energy_points;
		this->attack_damage = source_class.attack_damage;
	}
	return (*this);
}