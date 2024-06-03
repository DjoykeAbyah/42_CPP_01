/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/03 18:52:49 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/03 19:08:50 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon _weapon;
		std::string _name;
		
	public:
		HumanA();//takes weapon in constructor
		~HumanA();
		
		void attack();
}
	
#endif