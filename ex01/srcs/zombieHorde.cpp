/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:08:52 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/20 19:28:35 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ZombieHorde::ZombieHorde(int N, std::string name)
{
	_zombies = new Zombie[N];
	_size = N;
	for (int i = 0; i < _size; i++)
	{
		std::ostringstream num;
		num << (i + 1);
		_zombies[i].setName(name + " " + num.str());
	}
	std::cout << "A ZombieHorde was Constructed!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ZombieHorde::~ZombieHorde()
{
	delete[] _zombies;
	std::cout << "ZombieHorde Destructed!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

Zombie* ZombieHorde::zombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::ostringstream num;
		num << (i + 1);
		horde[i].setName(name + " " + num.str());
	}
	return horde;
}

void	ZombieHorde::announce(void) const
{
	for (int i = 0; i < _size; i++)
		_zombies[i].announce();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */