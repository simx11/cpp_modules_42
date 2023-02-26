/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:29:05 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 11:34:09 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap efault constructor called\n";
	this->type = "FragTrap";
	this->name = "Noname";
	this->health = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(std::string str)
{
	std::cout << "FragTrap parametric constructor called\n";
	this->type = "FragTrap";
	this->name = str;
	this->health = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& source_class)
{
	std::cout << "FragTrap copy constructor called\n";
	*this = source_class;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called\n";
}

void FragTrap::highFivesGuys()
{
	std::cout << this->type << " " << this->name << " high fived the guys.\n";
}

FragTrap& FragTrap::operator=(const FragTrap& source_class)
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