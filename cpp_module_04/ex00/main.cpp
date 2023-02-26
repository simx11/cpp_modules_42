/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 11:52:29 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/26 14:03:37 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	j->makeSound(); //will output the dog sound
	i->makeSound(); //will output the cat sound

	delete(j);
	delete(i);
	delete(meta);

	std::cout << "\n*********** Wrong cat test ***********\n\n";
	
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* t = new WrongCat();

	std::cout << wrong_meta->getType() << " " << std::endl;
	std::cout << t->getType() << " " << std::endl;
	wrong_meta->makeSound();
	t->makeSound();

	delete(t);
	delete(wrong_meta);
		
	return (0);
}