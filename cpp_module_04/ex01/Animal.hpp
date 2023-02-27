/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:07:50 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/27 15:18:29 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	public:
		//constructors/destructor
		Animal();
		Animal(const Animal& source_class);
		virtual ~Animal();

		//getter
		std::string getType() const;
		virtual Brain *getBrain() const = 0;

		virtual void makeSound() const;

		//assignment operator overloading
		virtual Animal& operator=(const Animal& source_class);
    
	protected:
		std::string type;
};

#endif