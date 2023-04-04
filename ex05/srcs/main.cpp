/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:59:59 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/04 12:15:33 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(int argc, char **argv)
{
	Harl test;

	if (argc == 2)
		test.complain(argv[1]);
	else
		std::cout << "Error! Usage: ./harl <level>\n";

	return 0;
}