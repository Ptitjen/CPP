/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:13:35 by jeulliot          #+#    #+#             */
/*   Updated: 2022/06/24 18:16:40 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main (int argc, char **argv) 
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
	
		// while (++i < argc)
		// 	std::cout << std::hex << std::showbase 
		// 	<< std::uppercase << argv[i] << std::endl;
		int i = 1;
		while (i < argc)
		{
			int j = 0;
			while(argv[i][j])
			{				
				std::cout << (char)toupper(argv[i][j]);		
				j ++;
			}
			i ++;
		}
	}
	std::cout << std::endl;
    return 0;
}