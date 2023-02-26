/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:29:08 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 11:31:07 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		//constructors/destructor
		FragTrap();
		FragTrap(std::string str);
		FragTrap(const FragTrap& source_class);
		~FragTrap();;
		
		//assignment operator overloading
		FragTrap& operator=(const FragTrap& source_class);

		void highFivesGuys();
};

#endif