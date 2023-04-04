/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:59:59 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/04 15:08:01 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main()
{
	Harl test;

	// THESE LEVELS SHOULD WORK
	std::cout << "-------------------------------------------These should work:\n\n";
	test.complain("DEBUG");
	std::cout << std::endl;
	test.complain("INFO");
	std::cout << std::endl;
	test.complain("WARNING");
	std::cout << std::endl;
	test.complain("ERROR");
	std::cout << std::endl;

	// THESE LEVELS DON'T EXIST AND SHOULD NOT WORK
	std::cout << "--------------------------------------------These should not work:\n\n";
	test.complain("ERRROR");
	std::cout << std::endl;
	test.complain("");
	std::cout << std::endl;
	test.complain("PIKACHU");
	std::cout << std::endl;
	//test.complain(42);  // should not compile the program
	test.complain("42");
	std::cout << std::endl;
	test.complain("DEBUG DEBUG");
	std::cout << std::endl;
	test.complain("DEBUG INFO");
	std::cout << std::endl;
	test.complain("debug");
	std::cout << std::endl;
	test.complain("info");
	std::cout << std::endl;
	test.complain("warning");
	std::cout << std::endl;
	test.complain("error");
	std::cout << std::endl;

	return 0;
}