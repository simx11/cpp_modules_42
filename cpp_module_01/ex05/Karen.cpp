/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:08:10 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/21 16:53:20 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	std::cout << "A Karen came into the store.\n";
}

Karen::~Karen()
{
	std::cout << "A Karen got arrested.\n";
}

void Karen::debug()
{
	std::cout << "DEBUG: I noticed that the strawberry ice cream has been out of stock for a while, I hope they have it now.\n";
}

void Karen::info()
{
	std::cout << "INFO: I ordered a double scoop, but you only gave me one. What is going on here? Don't you know how to count?\n";
}

void Karen::warning()
{
	std::cout << "WARNING: This ice cream better not be too cold. I have sensitive teeth, and I will sue you if it hurts me.\n";
}

void Karen::error()
{
	std::cout << "ERROR: I found a hair in my ice cream! How dare you serve me something like this? You better give me a refund right now or else!\n";
}

void Karen::complain(std::string level)
{
	void (Karen::*complain_pointer[4])(void) = {&Karen::debug, &Karen::info,
		&Karen::warning, &Karen::error};
	std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for(int i = 0; i < 4; i++)
	{
		if (level == options[i])
		{
			(this->*complain_pointer[i])();
			break;
		}
	}
}