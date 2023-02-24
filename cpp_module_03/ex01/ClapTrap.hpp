/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:29:08 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/24 18:00:13 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class ClapTrap
{
	public:
		//constructors/destructor
		ClapTrap();
		ClapTrap(std::string str);
		ClapTrap(const ClapTrap& source_class);
		~ClapTrap();

		//member functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		//assignment operator overloading
		ClapTrap& operator=(const ClapTrap& source_class);
    
	private:
		std::string name;
		int health;
		int energy_points;
		int attack_damage;
};

#endif