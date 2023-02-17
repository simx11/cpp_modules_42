/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:23:42 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/17 17:56:58 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	std::string str = "";

	while (str != "EXIT")
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT).\n";
		std::getline(std::cin, str);
		if(str == "ADD")
			book.addContact();
		else if(str == "SEARCH")
		{
			if(book.getContact(0).getFirstname() == "")
				std::cout << "No contacts to search for yet. Add a contact first\n";
			else	
				book.searchContact();
		}
		if (std::cin.eof())
			return (0);
	}
	return (0);
}