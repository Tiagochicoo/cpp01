/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 22:44:25 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/21 14:49:06 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *fileContent;
		std::ifstream file(argv[1]);
		if (file)
		{
			std::streambuf *buffer = file.rdbuf();
			std::streamsize size = buffer->pubseekoff(0, file.end);
			buffer->pubseekoff(0, file.beg);
			fileContent = new char[size];
			buffer->sgetn(fileContent, size);
			file.close();
			std::cout.write(fileContent, size);
			delete[] fileContent;
		}

		// std::stringbuf buffer;
		// std::ostream os(&buffer);

		// buffer.sputn(argv[2], argv[2].str);
		// // os << std::hex << 255;
		// std::cout << buffer.str();

		// std::ifstream file;
		// std::stringstream	replace;
		// file.open(argv[1]);
		// replace << file.rdbuf();
		// file.close();
		// std::string str = replace.str();
		

		// 	std::cout << str << "\n";
	}
	else
		std::cout << "Usage: ./sed_is_for_losers <filename> <s1> <s2>\n";

	return (0);
}
