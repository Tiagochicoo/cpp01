/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 22:44:25 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/03 10:42:43 by tpereira         ###   ########.fr       */
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
	size_t		tmp;
	int			start;
	int			end;
	int			j;
	(void)s2;

	end = INT_MAX;
	j = 0;
	tmp = 0;
	if (content.find(s1) != std::string::npos)
	{
		while (content.find(s1) != std::string::npos)
		{
			start = content.find(s1[j]);
			tmp = start;
			while (content[start] == s1[j])
			{
				j++;
				start++;
			}
			start = tmp;
			end = j + tmp;
			while (end > start)
			{
				content[start] = s2[s1.length() - j];
				start++;
				j--;
			}
			if (tmp == content.size())
				break ;
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
