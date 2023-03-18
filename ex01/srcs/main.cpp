/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:06:39 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/18 20:44:55 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	ZombieHorde horde(2, "Zeca");
	horde.announce();
	Zombie *newHorde = horde.zombieHorde(2, "Boo");

	for (int i = 0; i < 2; i++)
		newHorde[i].announce();

	delete[] newHorde;
	
	return (0);
}
