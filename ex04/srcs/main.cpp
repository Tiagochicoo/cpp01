/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 22:44:25 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/21 17:37:36 by tpereira         ###   ########.fr       */
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

std::string replaceString(std::string content, std::string s1, std::string s2, std::string filename)
{
	(void)s2;
	if (content.find(s1) != std::string::npos)
		std::cout << s1 << " found on file content!\n";
	else
		std::cout << "\"" << s1 << "\"" << " not found on " << filename;
	return (content);
}


int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::string fileContent;
		std::string type = ".replace";
		std::string replaceFileName = argv[1] + type;
		std::ofstream replaceFile(replaceFileName.c_str());
		fileContent = getFileContent(argv);
		replaceFile << replaceString(fileContent, s1, s2, replaceFileName);
		// std::cout << fileContent;
	}
	else
		std::cout << "Usage: ./sed_is_for_losers <filename> <s1> <s2>\n";

	return (0);
}
