/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:29:08 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 11:20:51 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		//constructors/destructor
		ScavTrap();
		ScavTrap(std::string str);
		ScavTrap(const ScavTrap& source_class);
		~ScavTrap();;
		
		//assignment operator overloading
		ScavTrap& operator=(const ScavTrap& source_class);

		void guardGate();
};

#endif