/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:41:22 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/27 13:47:27 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		//constructors/destructor
		Brain();
		Brain(const Brain& source_class);
		~Brain();

		void printIdeas() const;
		void printIdeas(int index) const;

		void setIdea(int index, std::string str);

		//assignment operator overloading
		Brain& operator=(const Brain& source_class);
    
	private:
		std::string ideas[100];
};

#endif