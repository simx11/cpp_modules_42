/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:01:08 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/24 13:41:38 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		//constructors/destructor
		Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed& source_class);
		~Fixed();

		//assignment operator overloading
		Fixed& operator=(const Fixed& source_class);

		//getter
		int getRawBits() const;

		//setter
		void setRawBits(int const raw);

		//member functions
		float toFloat() const;
		int toInt() const;

	private:
		int fixed_point;
		static const int bits = 8;
};

std::ostream& operator<<(std::ostream& curr_stream, const Fixed& other);

#endif