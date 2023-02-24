/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:29:08 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/24 18:15:17 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap
{
	public:
		//constructors/destructor
		ScavTrap();
		ScavTrap(std::string str);
		ScavTrap(const ScavTrap& source_class);
		~ScavTrap();

		//member functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		//assignment operator overloading
		ScavTrap& operator=(const ScavTrap& source_class);
    
	private:
		std::string name;
		int health;
		int energy_points;
		int attack_damage;
};

#endif