/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 22:44:25 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/20 22:22:28 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		std::ifstream 		file;
		std::stringstream	replace;
		file.open(argv[1]);
		replace << file.rdbuf();
		file.close();
		std::string str = replace.str();
		
		if (str.compare(argv[2]))
			std::cout << "exists \n";

		std::cout << str << "\n";
	}
	else
		std::cout << "Error: too few arguments\n";

	return (0);
}
