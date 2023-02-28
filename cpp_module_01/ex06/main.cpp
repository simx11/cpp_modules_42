/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:08:44 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/28 13:41:13 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int getComplaint(char *arg)
{
	std::string str = arg;
	std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)	
	{
		if(str == options[i])
			return(i);
	}
	return(4);
}

int main(int ac, char *av[])
{
	Karen karen1;
	int complaint;
	
	if (ac != 2)
		std::cout << "[Probably complaining about insignificant problems]\n";
	else
	{
		complaint = getComplaint(av[1]);
		switch(complaint)
		{
			case 0:
				karen1.complain("DEBUG");
			case 1:
				karen1.complain("INFO");
			case 2: 
				karen1.complain("WARNING");
			case 3:
				karen1.complain("ERROR");
				break;
			default:
				std::cout << "[Probably complaining about insignificant problems]\n";
				break;
		}
	}
	return (0);
}
