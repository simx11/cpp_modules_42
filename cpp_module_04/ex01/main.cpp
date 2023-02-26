/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:52:29 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 14:52:32 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	
    for (int i = 0; i < 4; i++)
	{
    	delete animals[i];
	}


	return (0);
}