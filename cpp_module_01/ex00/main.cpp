/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:59:30 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/20 10:38:00 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie_new = newZombie("Linus");
	zombie_new->announce();
	randomChump("Robert");
	std::cout << zombie_new->getName() << " is still alive, while randomChump already got destroyed.\n";
	delete zombie_new;
	return (0);
}