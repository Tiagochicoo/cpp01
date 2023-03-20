/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 22:44:25 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/20 18:15:06 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		std::ifstream file(argv[1]);
		std::string lorem;
		file >> lorem;
		std::cout << "testing file: " << lorem << "\n";
		file.close();
	}

	return (0);
}
