/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:32:09 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/17 19:23:27 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	//nothing
}
	
Contact::~Contact()
{
	//nothing
}

std::string Contact::getFirstname() const 		{return this->firstname;}
std::string Contact::getLastname() const 		{return this->lastname;}
std::string Contact::getNickname() const 		{return this->nickname;}
std::string Contact::getPhonenbr() const 		{return this->phonenbr;}
std::string Contact::getDarkestSecret() const 	{return this->darkest_secret;}

void Contact::setFirstname(std::string str)		{this->firstname = str;}
void Contact::setLastname(std::string str)		{this->lastname = str;}
void Contact::setNickname(std::string str)		{this->nickname = str;}
void Contact::setPhonenbr(std::string str)		{this->phonenbr = str;}
void Contact::setDarkestSecret(std::string str){this->darkest_secret = str;}