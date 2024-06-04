/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/03 18:52:54 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/04 15:40:21 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon* _weapon; //pointer is always a different address, and can initialise as NULL
		std::string _name;
		
	public:
		HumanB(const std::string& givenName);//no weapon in constructor
		~HumanB();

		void attack() const;//why const?
		void setWeapon(Weapon& givenWeapon);
};

#endif