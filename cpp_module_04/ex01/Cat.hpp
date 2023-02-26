/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:07:46 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 14:42:50 by shoffman         ###   ########.fr       */
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

		void makeSound() const;

		//assignment operator overloading
		Cat& operator=(const Cat& source_class);

	private:
		Brain *cat_brain;
};

#endif