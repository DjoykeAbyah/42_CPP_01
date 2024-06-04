/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/03 18:52:46 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/04 15:36:12 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string givenName, Weapon& givenWeapon) : _name(givenName), _weapon(givenWeapon)
{
	std::cout <<_name << ": constructor called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << _name << ": deconstructor called" << std::endl;

}

/**
 * _weapon.getType() that's how you call a function on a variable??? look it up!!
*/
void HumanA::attack() const
{
	std::cout << _name << " attacks with their" << _weapon.getType() << std::endl;
	return ;
}