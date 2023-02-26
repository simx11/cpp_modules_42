/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:07:46 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 14:02:25 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
	public:
		//constructors/destructor
		WrongCat();
		WrongCat(const WrongCat& source_class);
		~WrongCat();

		void makeSound() const;

		//assignment operator overloading
		WrongCat& operator=(const WrongCat& source_class);
};

#endif