/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:12:50 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/17 18:56:53 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie foo;
	Zombie *bar = foo.newZombie("Bar");
	
	bar->randomChump("Chump");
	foo.announce();
	bar->announce();

	delete bar;

	return (0);
}
