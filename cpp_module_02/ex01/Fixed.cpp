/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:01:34 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/27 17:45:27 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fixed_point = 0;
}

Fixed::Fixed(const int nb) : fixed_point(nb * pow(2, bits))
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float nb) : fixed_point(roundf(nb * pow(2, bits)))
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& source_class)
{
	std::cout << "Copy constructor called\n";
	*this = source_class;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& source_class)
{
	std::cout << "Copy assignment operator called.\n";
	if (this != &source_class)
		this->fixed_point = source_class.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits called\n";
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits called\n";
	this->fixed_point = raw;
}

float Fixed::toFloat() const
{
	return (static_cast<float>(this->fixed_point / pow(2, bits)));
}


int Fixed::toInt() const
{
	return (this->fixed_point / pow(2, bits));
}

std::ostream& operator<<(std::ostream& curr_stream, const Fixed& other)
{
	curr_stream << other.toFloat();
	return curr_stream;
}
