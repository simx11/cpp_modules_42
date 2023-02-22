/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:00:13 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/21 16:16:42 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str){this->type = str;}
Weapon::Weapon(){}
Weapon::~Weapon(){}

void Weapon::setType(std::string str)	{this->type = str;}

std::string& Weapon::getType()	{return this->type;}