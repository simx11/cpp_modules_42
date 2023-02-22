/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:06:00 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/20 10:38:06 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int amount = 12;
	
	Zombie *horde = zombieHorde(amount, "Karl");
	for (int i = 0; i < amount; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}