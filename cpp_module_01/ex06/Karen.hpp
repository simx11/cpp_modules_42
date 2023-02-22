/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:08:19 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/21 16:30:04 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef KAREN_HPP
# define KAREN_HPP

class Karen
{
	private:
		void debug();
		void info();
		void warning();
		void error();
	
	public:
		Karen();
		~Karen();
		void complain(std::string level);
};

#endif