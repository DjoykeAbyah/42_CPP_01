/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/03 18:52:49 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/04 15:35:21 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon& _weapon; //reference always has the same address, if get's reassignes it changes everything!
		std::string _name;
		
	public:
		HumanA(std::string givenName, Weapon& givenWeapon);//takes name and weapon in constructor
		~HumanA();
		
		void attack() const;//why const?
};
	
#endif