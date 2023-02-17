/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:36:01 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/17 17:57:12 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int isInt(std::string str)
{
	int i = 0;
	
	if (str[i] == '-')
		i++;
	while (isdigit(str[i]))
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}

int ftStoi(std::string str)
{
	int i = 0;
	int num = 0;
	int sign = 1;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * sign);
}

std::string reverseString(std::string str)
{
	std::string rev = "";
	for (int i = str.size() - 1; i >= 0; i--)
		rev += str[i];
	return (rev);
}

std::string format(std::string str)
{
	if (str.size() > 9)
	{
		str.resize(9);
		str.append(".");
	}
	str = reverseString(str);
	while (str.size() < 10)
		str.append(" ");
	str = reverseString(str);
	return (str);
}

void displayUi(Contact contacts[8])
{
	std::cout << "\n";
	std::cout << "|----------|----------|----------|----------|\n";
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	std::cout << "|----------|----------|----------|----------|\n";
	for (int i = 0; i < 8; i++)
	{
		if(contacts[i].getFirstname() != "")
		{
			std::cout << "|         " << i + 1;
			std::cout << "|" << format(contacts[i].getFirstname());
			std::cout << "|" << format(contacts[i].getLastname());
			std::cout << "|" << format(contacts[i].getNickname()) << "|\n";
		}
	}
	std::cout << "\n";
}