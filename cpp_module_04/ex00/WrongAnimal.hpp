/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:07:50 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 13:58:27 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		//constructors/destructor
		WrongAnimal();
		WrongAnimal(const WrongAnimal& source_class);
		virtual ~WrongAnimal();

		//getter
		std::string getType() const;

		void makeSound() const;

		//assignment operator overloading
		WrongAnimal& operator=(const WrongAnimal& source_class);
    
	protected:
		std::string type;
};

#endif