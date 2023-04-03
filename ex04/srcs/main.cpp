/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 22:44:25 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/03 12:16:04 by tpereira         ###   ########.fr       */
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
	std::string newContent;
	size_t		start;
	size_t		end;
	(void)s2;

	start = 0;
	end = 0;
	if (content.find(s1) != std::string::npos)
	{
		while (1)
		{
			if (content.find(s1) != std::string::npos)
			{
				if (newContent.length() > 0)
				{
					start = newContent.find(s1);
					end = start + s1.length();
					newContent += " " + newContent.substr(0, start);
				}
				else
				{
					start = content.find(s1);
					end = start + s1.length();
					newContent = content.substr(0, start);
				}
				newContent += "---------------------"; // + s2;
				content = content.substr(end + s2.length());
				if (content.length() == end)
					break ;
			}
		}
	}
	else
		std::cout << "\"" << s1 << "\"" << " not found on " << filename <<"\n";
	return (newContent);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream	file;
		std::string 	s1 = argv[2];
		std::string 	s2 = argv[3];
		std::string 	fileContent;
		std::string 	type = ".replace";
		std::string 	replaceFileName = argv[1] + type;
		std::ofstream	replaceFile(replaceFileName.c_str());
		file.open(argv[1]);
		fileContent = getFileContent(argv);
		if (file)
			replaceFile << replaceString(fileContent, s1, s2, argv[1]);
		else
			std::cout << "error: file doesn't exist or you don't have the right permissions\n";
	}
	else
		std::cout << "Usage: ./sed_is_for_losers <filename> <s1> <s2>\n";

	return (0);
}
