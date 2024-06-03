/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/03 18:53:00 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/03 19:21:25 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "weapon default constructor called" << std::endl;
	return ;
	
}

Weapon::~Weapon(void)
{
	std::cout << "weapon deconstructor called" << std::endl;
	return ;	
}

const std::string& Weapon::getType() const
{
	return _type;
}

void Weapon::setType(std::string givenType)
{
	givenType = _type;
}