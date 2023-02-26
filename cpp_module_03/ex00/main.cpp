/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:29:11 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 11:53:08 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap c("John");
	c.attack("Mike");
	c.takeDamage(5);
	c.beRepaired(1);
	c.attack("Tessa");
	c.takeDamage(6);
	c.beRepaired(1);
	c.attack("Umu");

	return (0);	
}