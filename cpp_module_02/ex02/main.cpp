/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:01:56 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/24 16:46:05 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main()
{
	{
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));
		
		std::cout << "42 main:\n";
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
		std::cout << "----------------------------------\n";
	}
	{
		
		Fixed x;
		Fixed y(5.5f);
		Fixed z(10);

		std::cout << "My main:\n";
		if (y > x)
			std::cout << "> overloading working.\n";
		if (x < y)
			std::cout << "< overloading working.\n";
		if (y >= x)
			std::cout << ">= overloading working.\n";
		if (x <= y)
			std::cout << "<= overloading working.\n";
		if (!(y == x))
			std::cout << "== overloading working.\n";
		if (y != x)
			std::cout << "!= overloading working.\n";
		
		std::cout << "----------------------------------\n";
		
		x = y + z;
		std::cout << "x is " << x << std::endl;
		x = y - z;
		std::cout << "x is " << x << std::endl;
		x = y * z;
		std::cout << "x is " << x << std::endl;
		x = y / z;
		std::cout << "x is " << x << std::endl;
		
		std::cout << "----------------------------------\n";

		std::cout << "y before pre-inrement: " << y.getRawBits() << "\n";
		Fixed temp = ++y;
		std::cout << "y after pre-increment: " << y.getRawBits() << "\n";
		std::cout << "Return value of the pre-increment is " << temp.getRawBits() << "\n";

		std::cout << "x before post-inrement: " << x.getRawBits() << "\n";
		temp = x++;
		std::cout << "x after post-increment: " << x.getRawBits() << "\n";
		std::cout << "Return value of the pre-increment is " << temp.getRawBits() << "\n";
		
		return (0);
	}
}