/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: djoyke <djoyke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/28 22:48:04 by djoyke        #+#    #+#                 */
/*   Updated: 2024/06/03 14:42:48 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

/**
 * allocated on the heap Zombie
*/
Zombie* newZombie(std::string name)
{
	Zombie* newZombie = new Zombie(name);
	return newZombie;
}
