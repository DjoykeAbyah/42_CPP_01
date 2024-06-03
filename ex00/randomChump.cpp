/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: djoyke <djoyke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/28 22:48:07 by djoyke        #+#    #+#                 */
/*   Updated: 2024/06/03 14:38:17 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

/**
 * allocated zombie on stack
*/
void randomChump(std::string name)
{
	Zombie Chump(name);
	Chump.announce();
}
