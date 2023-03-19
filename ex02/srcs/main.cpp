/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:18:52 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/19 11:27:54 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR  = &string;
	std::string &stringREF = string;

	// The memory address of the string variable
	std::cout << &string << std::endl;
	// The memory address held by stringPTR
	std::cout << stringPTR << std::endl;
	// The memory address held by stringREF
	std::cout << &stringREF << std::endl;

	// The value of the string variable
	std::cout << string << std::endl;
	// The value pointed to by stringPTR
	std::cout << *stringPTR << std::endl;
	// the value pointed to by stringREF
	std::cout << stringREF << std::endl;

	return 0;
}
