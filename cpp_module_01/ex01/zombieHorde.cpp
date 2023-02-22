/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:07:04 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/20 09:54:34 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	Zombie *horde = new Zombie[n];
	for(int i = 0; i < n; i++)
		horde[i].setName(name);
	return(horde);
}