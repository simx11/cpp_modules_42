/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:14:32 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/15 10:12:32 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

int	main(int argc, char *argv[])
{
	int j = 1;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (argv[j])
		{
			for (size_t i = 0; i < std::strlen(argv[j]); i++)
				std::cout << (char)toupper(argv[j][i]);
			j++;
		}
		std::cout << "\n";
	}
	return (0);
}