/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:01:08 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/24 16:38:25 by shoffman         ###   ########.fr       */
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

		int getRawBits() const;
		void setRawBits(int const raw);

		float toFloat() const;
		int toInt() const;

		bool operator>(const Fixed& source_class) const;
		bool operator<(const Fixed& source_class) const;
		bool operator>=(const Fixed& source_class) const;
		bool operator<=(const Fixed& source_class) const;
		bool operator==(const Fixed& source_class) const;
		bool operator!=(const Fixed& source_class) const;

		Fixed operator+(const Fixed& source_class) const;
		Fixed operator-(const Fixed& source_class) const;
		Fixed operator*(const Fixed& source_class) const;
		Fixed operator/(const Fixed& source_class) const;

		//post-increment (returns original value)
		Fixed operator++(int);
		Fixed operator--(int);

		//pre-increment (returns new value)
		Fixed& operator++();
		Fixed& operator--();

		static Fixed& min(Fixed& n1, Fixed& n2);
		static const Fixed& min(const Fixed& n1, const Fixed& n2);
		static Fixed& max(Fixed& n1, Fixed& n2);
		static const Fixed& max(const Fixed& n1, const Fixed& n2);
		
	private:
		int fixed_point;
		static const int bits = 8;
};

std::ostream& operator<<(std::ostream& curr_stream, const Fixed& other);

#endif