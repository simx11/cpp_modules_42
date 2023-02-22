/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:01:08 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/22 17:21:56 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		//constructors/destructor
		Fixed();
		Fixed(const Fixed& source_class);
		~Fixed();

		//assignment operator overloading
		Fixed& operator=(const Fixed& source_class);

		//getter
		int getRawBits() const;

		//setter
		void setRawBits(int const raw);
    
	private:
		int fixed_point;
		static const int bits = 8;
};

#endif