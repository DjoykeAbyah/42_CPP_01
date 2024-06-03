/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/03 16:31:46 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/03 16:56:38 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << Zombie::_name << ": default constructor called" << std::endl;
	return ;
}

Zombie::Zombie(std::string givenName) : _name(givenName)
{
	std::cout << Zombie::_name << "constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << Zombie::_name << ": destroyed" << std::endl;
	return ;
}