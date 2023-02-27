/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:07:46 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/27 15:18:05 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		//constructors/destructor
		Cat();
		Cat(const Cat& source_class);
		~Cat();

		Brain *getBrain() const;

		void makeSound() const;

		//assignment operator overloading
		Animal& operator=(const Animal& source_class);

	private:
		Brain *cat_brain;
};

#endif