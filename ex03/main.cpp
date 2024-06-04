/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/03 18:52:57 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/04 15:44:57 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/**
 * when use pointer to weapon and when use reference to weapon?
 * By using references for HumanA, 
 * we ensure that it always has a valid Weapon and avoid null checks. 
 * For HumanB, we use pointers to allow for the possibility of not having a weapon, 
 * making it more flexible.
*/
int main()
{
	{
		Weapon nerfGun = Weapon("pink sparkly nerf gun");
		
		HumanA lilly("Lilly", nerfGun);
		lilly.attack();
		nerfGun.setType("sailor moon's scepter");
		lilly.attack();
	}
	{
		Weapon nunChucks = Weapon("hello kitty nunchucks");
		
		HumanB paulito("Paulito");
		paulito.attack();
		paulito.setWeapon(nunChucks);
		paulito.attack();
		nunChucks.setType("iffy Pokeball");
		paulito.attack();
	}
	return 0;
}