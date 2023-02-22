/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:59:35 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/20 13:52:04 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
		std::string name;
		Weapon &weapon_a;
	
	public:
		HumanA(std::string str, Weapon &weapon);
		~HumanA();

	void attack();
};

#endif