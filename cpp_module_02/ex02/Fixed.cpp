/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:01:34 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/24 16:38:23 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called\n";
	this->fixed_point = 0;
}

Fixed::Fixed(const int nb) : fixed_point(nb * pow(2, bits))
{
	// std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float nb) : fixed_point(roundf(nb * pow(2, bits)))
{
	// std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& source_class)
{
	// std::cout << "Copy constructor called\n";
	*this = source_class;
	return;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& source_class)
{
	// std::cout << "Copy assignment operator called.\n";
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

//Compariion operator overloading-----------------------------------------//
bool Fixed::operator>(const Fixed& source_class) const
{
	return (this->fixed_point > source_class.fixed_point);
}

bool Fixed::operator<(const Fixed& source_class) const
{
	return (this->fixed_point < source_class.fixed_point);
}

bool Fixed::operator>=(const Fixed& source_class) const
{
	return (this->fixed_point >= source_class.fixed_point);
}

bool Fixed::operator<=(const Fixed& source_class) const
{
	return (this->fixed_point <= source_class.fixed_point);
}

bool Fixed::operator==(const Fixed& source_class) const
{
	return (this->fixed_point == source_class.fixed_point);
}

bool Fixed::operator!=(const Fixed& source_class) const
{
	return (this->fixed_point != source_class.fixed_point);
}
//------------------------------------------------------------------------//

//Arithmetic operator overloading-----------------------------------------//
Fixed Fixed::operator+(const Fixed& source_class) const
{
	return Fixed(this->toFloat() + source_class.toFloat());
}

Fixed Fixed::operator-(const Fixed& source_class) const
{
	return Fixed(this->toFloat() - source_class.toFloat());
}

Fixed Fixed::operator*(const Fixed& source_class) const
{
	return Fixed(this->toFloat() * source_class.toFloat());
}

Fixed Fixed::operator/(const Fixed& source_class) const
{
	return Fixed(this->toFloat() / source_class.toFloat());
}
//------------------------------------------------------------------------//

//De/increment operator overloading---------------------------------------//
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	temp.fixed_point = this->fixed_point++;
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	temp.fixed_point = this->fixed_point++;
	return temp;
}

Fixed& Fixed::operator++()
{
	++this->fixed_point;
	return (*this);
}

Fixed& Fixed::operator--()
{
	--this->fixed_point;
	return (*this);
}
//------------------------------------------------------------------------//

//Max and min-------------------------------------------------------------//
Fixed& Fixed::min(Fixed& n1, Fixed& n2)
{
	if(n1.getRawBits() < n2.getRawBits())	
		return n1;
	return n2;
}

const Fixed& Fixed::min(const Fixed& n1, const Fixed& n2)
{
	if(n1.getRawBits() < n2.getRawBits())	
		return n1;
	return n2;
}

Fixed& Fixed::max(Fixed& n1, Fixed& n2)
{
	if(n1.getRawBits() > n2.getRawBits())	
		return n1;
	return n2;
}

const Fixed& Fixed::max(const Fixed& n1, const Fixed& n2)
{
	if(n1.getRawBits() > n2.getRawBits())	
		return n1;
	return n2;
}
//------------------------------------------------------------------------//