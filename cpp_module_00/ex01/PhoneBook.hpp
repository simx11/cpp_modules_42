/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:38:46 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/17 18:56:49 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONBOOK_CPP
# define PHONBOOK_CPP

#include "Contact.hpp"
#include "utils.hpp"
#include <string>
#include <cstdlib>
#include <iostream>

class PhoneBook
{
	private:
		Contact contacts[8];
		int index;
		
	public:
		PhoneBook();
		~PhoneBook();
	
		//getter
		Contact getContact(int index);

		//functionalities
		void addContact();
		void searchContact();
		void printContact(Contact contact);
};

#endif