/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:38:05 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/17 18:57:08 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "utils.hpp"
#include <string>
#include <cstdlib>
#include <iostream>

int			ftStoi(std::string str);
int			isInt(std::string str);
void		displayUi(Contact contacts[8]);
std::string	format(std::string name);
std::string reverseString(std::string str);

#endif