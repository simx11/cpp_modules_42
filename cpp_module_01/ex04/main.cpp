/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoffman <shoffman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:27:44 by shoffman          #+#    #+#             */
/*   Updated: 2023/02/21 12:00:01 by shoffman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>


void replace(std::string& line, std::string search, std::string replace)
{	
	int pos;
    while(line.find(search) != std::string::npos)
    {
        pos = line.find(search);
        line.erase(pos, search.length());
        line.insert(pos, replace);
    }
}

int	main(int argc, char *argv[])
{
	std::string in_file = argv[1];
	std::string out_file = in_file + ".replace";
	if(argc != 4)
		return(std::cout << "Invalid amount of arguments.\n", 1);
	std::ifstream input(argv[1]);
	if(!input.is_open())
		return(std::cout << "File could not be opened\n", 1);
	std::string line;
	std::ofstream output;
	output.open((out_file).c_str());
	while(std::getline(input, line))
	{	
		replace(line, std::string(argv[2]), std::string(argv[3]));
		output << line << std::endl;
	}
	input.close();
	output.close();
	return(0);
}