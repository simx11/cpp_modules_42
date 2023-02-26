/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:07:46 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 13:51:49 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>

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
};

#endif