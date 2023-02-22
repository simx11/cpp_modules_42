/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:26:37 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/20 10:46:35 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Memory address of str is " << &str << "\n";
	std::cout << "Mmeoy address held by stringPTR is " << stringPTR << "\n";
	std::cout << "Mmeoy address held by stringREF is " << &stringREF << "\n";

	std::cout << "--------------------------------------------------\n";
	
	std::cout << "Value of str is " << str << "\n";
	std::cout << "Value pointed to by strinPTR is " << *stringPTR << "\n";
	std::cout << "Value pointed to by strinREF is " << stringREF << "\n";
	
	return (0);
}