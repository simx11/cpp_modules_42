/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:32:42 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/17 17:52:12 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact 
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenbr;
		std::string darkest_secret;
		
	public:
		//constructor/deconstructor
		Contact();
		~Contact();
		
		//getters
		std::string	getFirstname() const;
		std::string getLastname() const;
		std::string getNickname() const;
		std::string getPhonenbr() const;
		std::string getDarkestSecret() const;
		
		//setters
		void setFirstname(std::string str);
		void setLastname(std::string str);
		void setNickname(std::string str);
		void setPhonenbr(std::string str);
		void setDarkestSecret(std::string str);
};

#endif