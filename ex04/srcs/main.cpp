/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 22:44:25 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/23 09:00:15 by tpereira         ###   ########.fr       */
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
	int			start;
	int			end;
	int			j;
	(void)s2;

	if (content.find(s1) != std::string::npos)
	{
		start = content.find(s1);
		for (int i = 0; i < (int)content.size(); i++)
		{
			end = 0;
			if (content[i] == s1[0])
				start = i;
			while (content[i] == s1[0])
				i++;
			end = i;
			if ((end - start) == (int)s1.size())
			{
				j = 0;
				while (start < end)
				{
					std::cout << "content[start]: " << content[start] << " | s2[j]: " << s2[j] << " | j: " << j << "\n";
					content[start] = s2[j];
					start++;
					j++;
				}
			}
		}
	}
	else
		std::cout << "\"" << s1 << "\"" << " not found on " << filename <<"\n";
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
