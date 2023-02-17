/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:53:56 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/17 19:16:54 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		//constructor/deconstructor
		Zombie();
		~Zombie();	

		//getters
		std::string getName() const;

		//setters
		void setName(std::string str);

		void announce();
};

#endif
