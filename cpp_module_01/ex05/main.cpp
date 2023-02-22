/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:08:44 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/21 16:53:39 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int main()
{
	Karen karen1;
	karen1.complain("DEBUG");
	karen1.complain("INFO");
	karen1.complain("WARNING");
	karen1.complain("ERROR");
	return (0);
}
