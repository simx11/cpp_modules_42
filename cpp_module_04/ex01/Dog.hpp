/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:07:46 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 14:46:51 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		//constructors/destructor
		Dog();
		Dog(const Dog& source_class);
		~Dog();

		void makeSound() const;

		//assignment operator overloading
		Dog& operator=(const Dog& source_class);

	private:
		Brain *dog_brain;
};

#endif