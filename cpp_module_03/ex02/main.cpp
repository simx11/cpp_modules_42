/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:29:11 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 11:34:38 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap f1("Walter");
	f1.attack("Jesse");
	f1.highFivesGuys();
	FragTrap f2(f1);
	f2.attack("Skyler");
	f2.takeDamage(100);
	f2.beRepaired(100);
}