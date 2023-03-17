/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:16:37 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/17 12:30:51 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "main.hpp"

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie();
		~Zombie();
	
		void	announce(void);
		

};

#endif