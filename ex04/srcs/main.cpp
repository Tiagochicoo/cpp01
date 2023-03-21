/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 22:44:25 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/21 16:33:39 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

std::string getFileContent(char **argv)
{
	std::fstream file(argv[1], std::fstream::in);
	std::string	content;
	getline(file, content, '\0');
	return content;
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		std::string type = ".replace";
		std::string replaceFileName = argv[1] + type;
		std::ofstream replaceFile(replaceFileName.c_str());
		std::string fileContent;
		fileContent = getFileContent(argv);
		replaceFile << fileContent;
		std::cout << fileContent;
	}
	else
		std::cout << "Error: too few arguments\n";

	return (0);
}
