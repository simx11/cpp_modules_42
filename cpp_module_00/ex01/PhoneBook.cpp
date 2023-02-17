/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:38:49 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/17 17:56:52 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	std::cout << "Welcome. A new awesome phonebook was created.\n";
}
	
PhoneBook::~PhoneBook()
{
	//nothing
}

Contact PhoneBook::getContact(int index)
{
	return(this->contacts[index]);
}

void PhoneBook::addContact()
{
	std::string str;
	
	if (this->index > 7)
		this->index = 0;
		
	std::cout << "Adding a new contact, please fill out the information.\n";
	std::cout << "Enter a first name: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		exit (0);
	this->contacts[index].setFirstname(str);
	
	std::cout << "Enter " << this->contacts[index].getFirstname() << "'s last name: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		exit (0);
	this->contacts[index].setLastname(str);
	
	std::cout << "Enter " << this->contacts[index].getFirstname() << "'s nickname: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		exit (0);
	this->contacts[index].setNickname(str);
	
	std::cout << "Enter " << this->contacts[index].getFirstname() << "'s phone number: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		exit (0);
	this->contacts[index].setPhonenbr(str);
	
	std::cout << "Enter " << this->contacts[index].getFirstname() << "'s darkest secret: ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		exit (0);
	this->contacts[index].setDarkestSecret(str);
	
	this->index++;
}

void PhoneBook::searchContact()
{
	std::string str;
	int selection;

	displayUi(this->contacts);
	while (1)
	{
		std::cout << "Type an index: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit (0);
		if (isInt(str))
		{
			selection = ftStoi(str);
			if (selection < 1 || selection > 8)
				std::cout << "This index is out of range, try again.\n";
			else if (this->contacts[selection - 1].getFirstname() == "")
				std::cout << "No entry, try again.\n";
			else
				break;
		}
		else
			std::cout << "Not an int, try again.\n";
	}
	printContact(contacts[selection - 1]);
}

void PhoneBook::printContact(Contact contact)
{
	std::cout << "Printing out contact information...\n";
	std::cout << "----------------------------------------------------------\n";
	std::cout << "First name: " << contact.getFirstname() << "\n";
	std::cout << "Last name: " << contact.getLastname() << "\n";
	std::cout << "Nickname: " << contact.getNickname() << "\n";
	std::cout << "Phone number: " << contact.getPhonenbr() << "\n";
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << "\n";
	std::cout << "----------------------------------------------------------\n";
}