/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:58:28 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/20 13:57:22 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	private:
		std::string name;
		Weapon *weapon_b;
	
	public:
		HumanB(std::string str);
		~HumanB();

	//setter
	void setWeapon(Weapon &weapon);

	void attack();
};

#endif