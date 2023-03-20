/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:33:50 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/19 11:12:38 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(std::string _name = "Foo");
		~Zombie();


		Zombie*		newZombie(std::string name);
		void		announce(void) const;
		void		randomChump(std::string name);
		void		setName(std::string name);
		std::string getName(void) const;
};

class ZombieHorde
{
	private:
		Zombie	*_zombies;
		int		_size;

	public:
		ZombieHorde(int N, std::string name);
		~ZombieHorde();

	Zombie* zombieHorde(int N, std::string name);
	void 	announce(void) const;
};

#endif /* ********************************************************** ZOMBIE_H */
