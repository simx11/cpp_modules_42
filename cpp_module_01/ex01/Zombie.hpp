/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 09:06:24 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/20 09:57:37 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
	private:
		std::string name;

	public:
		//constructor/deconstructor
		Zombie(std::string name);
		Zombie();
		~Zombie();
		
		//setter
		void setName(std::string str);

		//getter
		std::string getName() const;
		
		void announce();
};

Zombie*	zombieHorde(int n, std::string name);

#endif