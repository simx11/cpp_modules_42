/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:53:56 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/20 09:11:58 by shoffman         ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie();
		
		//getter
		std::string getName() const;
		
		void announce();
};

//heap
Zombie	*newZombie(std::string name);
//stack
void	randomChump(std::string name);

#endif
