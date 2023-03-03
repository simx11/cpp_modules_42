/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:29:11 by shoffman          #+#    #+#             */
/*   Updated: 2023/03/03 18:43:57 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap s1("Brutus");
	s1.attack("Isa");
	s1.guardGate();
	ScavTrap s2 = s1;
	s2.attack("John");
	s1.takeDamage(100);
	s1.beRepaired(100);

	return (0);
}