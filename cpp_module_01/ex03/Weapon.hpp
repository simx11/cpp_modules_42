/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:59:58 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/21 16:16:40 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string type;
	
	public:
		Weapon(std::string str);
		Weapon();
		~Weapon();

		//setter
		void setType(std::string str);
		
		//getter
		std::string& getType();
};

#endif