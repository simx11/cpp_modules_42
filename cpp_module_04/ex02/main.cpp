/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:52:29 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/27 15:38:18 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Animal test;
	
	//everything should work, write more test -> test for deep/shallow
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << "\n********************************\n\n";

	Animal* animals[4] = {new Dog(), new Cat(), new Dog(), new Cat()};

	animals[0]->makeSound();
    animals[2]->makeSound();
	animals[0]->getBrain()->setIdea(0, "Testidea 1");
    *animals[2] = *animals[0];
	animals[0]->getBrain()->printIdeas();
	animals[2]->getBrain()->printIdeas();
	animals[0]->getBrain()->setIdea(0, "Testidea 2");
	animals[0]->getBrain()->printIdeas();
	animals[2]->getBrain()->printIdeas();
	
    for (int i = 0; i < 4; i++)
	{
    	delete animals[i];
	}

	return (0);
}