/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:04:38 by tpereira          #+#    #+#             */
/*   Updated: 2023/03/19 22:28:15 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "./Weapon.hpp"

class HumanB
{
	private:
		Weapon* 	_weapon;
		std::string _name;

	public:

		HumanB(std::string name);
		~HumanB();

		void setWeapon(Weapon& weapon);
		void attack() const;
};


#endif /* ********************************************************** HUMANA_H */
